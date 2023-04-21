#define NUM_ITER 49749

#include <header.h>

int main_bench()
{
	int n,k,i;
	my_scanf("%d",&n);
	int *a=(int *)malloc(sizeof (int)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	my_scanf("%d",&k);
	int x=0;
	for(i=0;i<n;i++)
	{
		if(a[i]!=k)
		{
			if(x==0)
			{
				my_printf("%d",a[i]);
				x++;
			}
			else 
			{
				my_printf(" %d",a[i]);
			}
		}
	}
	free(a);
	return 0;
}