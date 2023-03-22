#define NUM_ITER 56660

#include <header.h>

int main_bench()
{
	int n;
	int a[100];
	int j,i;
	my_scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		my_scanf("%d",&(a[j]));
	}
    for(j=n-1,i=0;j>-1;j--)
	{
		if(i<n-1)
		{
			my_printf("%d ",a[j]);
			i++;
		}
		if(i==n-1)
		{
			my_printf("%d",a[0]);
			i++;
		}
	}
    return 0;
}