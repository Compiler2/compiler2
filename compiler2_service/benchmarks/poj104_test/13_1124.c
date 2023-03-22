#include <header.h>

int main_bench()
{
	int n,num[20000],i,j;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&num[i-1]);
		for(j=1;j<=i-1;j++)
			if(num[j-1]==num[i-1])
			{
				num[i-1]=0;
				break;
			}
	}
	my_printf("%d",num[0]);
	for(i=1;i<=n-1;i++)
	{
		if(num[i]!=0) my_printf(" %d",num[i]);
	}
	return 0;
}