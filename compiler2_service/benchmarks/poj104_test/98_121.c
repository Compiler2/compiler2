#include <header.h>

int main_bench()
{
	char s[1000][40];
	int n,len=0,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s",s[i]);
	len=strlen(s[0]);
	for(i=0;i<n-1;i++)
	{
		len=len+strlen(s[i+1])+1;
		if(len>80)
		{
			len=strlen(s[i+1]);
			my_printf("%s",s[i]);
			my_printf("\n");
		}
		else
			my_printf("%s ",s[i]);
	}
	my_printf("%s",s[n-1]);
}