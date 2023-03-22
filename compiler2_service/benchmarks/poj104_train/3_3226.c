#include <header.h>

int main_bench()
{
	int n,k,s[1000],i,j;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(s[i]+s[j]==k)
			{
				my_printf("yes");
				return 0;
			}
		}
		for(j=i+1;j<n;j++)
		{
			if(s[i]+s[j]==k)
			{
				my_printf("yes");
				return 0;
			}
		}
	}
	my_printf("no");
	return 0;
}
