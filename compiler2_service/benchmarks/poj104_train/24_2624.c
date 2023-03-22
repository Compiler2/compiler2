#include <header.h>

int main_bench()
{
	int n,i,max,min;
	char s[200][50];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s[i]);
	}
	max=strlen(s[0]);
	min=strlen(s[0]);
	for(i=0;i<n;i++)
	{
		if(strlen(s[i])>max)
			max=strlen(s[i]);
		if(strlen(s[i])<min)
			min=strlen(s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(strlen(s[i])==max)
		{
			my_printf("%s\n",s[i]);
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(strlen(s[i])==min)
		{
			my_printf("%s",s[i]);
			break;
		}
	}
	return 0;
}