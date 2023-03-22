#define NUM_ITER 2416

#include <header.h>

int main_bench()
{
	int a[1000],k,n;
	int i,j,of=0;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	} 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]!=a[j])
			{
				if(k==a[i]+a[j])
				{
				of++;
				}
			}
		}
	}
	if(of>0)
	{my_printf("yes");}
    if(of==0){my_printf("no");}
	return 0;
}