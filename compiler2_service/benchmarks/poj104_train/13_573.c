#define NUM_ITER 14061

#include <header.h>

int main_bench()
{
	int i,n,j;
	int a[20000];
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		if(i==0)my_printf("%d",a[i]);
		else
		{
			for(j=0;j<i;j++)
			{
				if(a[i]==a[j])break;
			}
			if(j==i)my_printf(" %d",a[i]);
		}
	}
}
