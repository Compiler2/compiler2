#define NUM_ITER 55131

#include <header.h>

int main_bench()
{
	int n,k;
	int arr[1001];
	int i,j,bb;

	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		bb=k-arr[i];
		for(j=i+1;j<n;j++)
		{
			if(bb==arr[j])
			{
				my_printf("yes\n");
				return 0;
			}
		}
	}
	if(i==n-1)my_printf("no\n");
}