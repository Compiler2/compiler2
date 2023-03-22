#define NUM_ITER 49607

#include <header.h>

int main_bench()
{
	int n,k,i;
	int *a;
	my_scanf("%d %d",&n,&k);
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[i]+a[i+j]==k)
			{
				my_printf("yes");
				return 0;
			}
		}
	}
	my_printf("no");
return 0;
}

