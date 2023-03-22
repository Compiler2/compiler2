#define NUM_ITER 54002

#include <header.h>

int main_bench()
{
	int n,k,a[1000],b,x=0,flag=0,i,j;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				b=a[i]+a[j];
				if(b==k)
				{
					my_printf("yes");
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
		{
			break;
		}
	}
	if(flag==0)
	{
		my_printf("no");
	}
	return 0;
}

