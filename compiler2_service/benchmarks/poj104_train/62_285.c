#define NUM_ITER 1314423

#include <header.h>

int main_bench()
{
	int i,j,l;
	char s[210];
	gets(s);
	l=strlen(s);
	j=0;
	for(i=0;i<l;i++)
	{
		if(s[i]==' ')
		{
			if(j==0)
			{
				my_printf("%c",s[i]);
				j++;
			}
		}
		else
		{
			my_printf("%c",s[i]);
			j=0;
		}
	}
	return 0;
}
