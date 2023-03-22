#include <header.h>

int main_bench()
{
	char s[31];
	int i,j,k=0,l;
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			my_printf("%c",s[i]);
			k=0;
		}
		else if(k==0)
		{
			my_printf("\n");
			k=1;
		}
	}
	return 0;
} 