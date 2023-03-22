#define NUM_ITER 6266

#include <header.h>


int main_bench()
{
	int i,n,m,j;
	int a[20000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]==a[i])
			{
				a[i]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			m=i;		   
		}
	}
	for(i=0;i<m;i++)
	{
		if(a[i]!=0)
		{
			my_printf("%d ",a[i]);
		}
	}
	my_printf("%d",a[m]);
		return 0;
}