#define NUM_ITER 6146

#include <header.h>

int main_bench()
{
	int a[300],n,k,i;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
		for(k=0;k<=i-1;k++)
		{
			if (a[k]==a[i])
				a[i]=-100;
		}
	}
	for(i=0;i<=n-1;i++)
	{
		if (i==0)
			my_printf("%d",a[i]);
		else if (a[i]!=-100)
			my_printf(",%d",a[i]);
	}
	return 0;
}