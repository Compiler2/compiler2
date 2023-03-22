#include <header.h>


int main_bench()
{
	int n,k,a[1000];
	my_scanf("%d %d",&n,&k);
	int i;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j&&a[i]+a[j]==k)
			{
				my_printf("yes");
			    return 0;
			}
		}
	}
	my_printf("no");
	return 0;
}

