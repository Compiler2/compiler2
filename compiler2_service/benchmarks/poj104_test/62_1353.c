#define NUM_ITER 1083682

#include <header.h>

int main_bench()
{
	char *s;
	int i,j=0,n;
	s=(char *)malloc(1000*sizeof (char));
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]!=' ')
		{
			s[j]=s[i];
			j++;
		}
		else
		{
			if(s[i+1]!=' ')
			{
				s[j]=s[i];
				j++;
			}
		}
	}
	for(i=0;i<j;i++)my_printf("%c",s[i]);
	my_printf("\n");
	free(s);
}
