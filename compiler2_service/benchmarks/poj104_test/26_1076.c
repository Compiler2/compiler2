#include <header.h>

int main_bench()
{
	char s[100];
	int n,i;
	gets(s);
	n=strlen(s);
	for(i=0;i<n-1;i++)
	{
		if(s[i]!=' ')
			my_printf("%c",s[i]);
		else
		{
			if(s[i+1]==' ') continue;
			else 
				my_printf(" ");
		}
	}
	my_printf("%c",s[n-1]);
	return 0;
}

