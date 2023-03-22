#include <header.h>

int main_bench()
{
	int n,i,j;
	int max=0,min=100;
	char s[250][250];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(strlen(s[i])>max) max=strlen(s[i]);
		if(strlen(s[i])<min) min=strlen(s[i]);
	}
	for(j=0;j<n;j++)
	{
		if(strlen(s[j])==max)
		{
			my_printf("%s\n",s[j]);
			break;
		}
	}
	for(j=0;j<n;j++)
	{
		if(strlen(s[j])==min) 
		{
			my_printf("%s\n",s[j]);
			break;
		}
	}
	return 0;
}