#define NUM_ITER 53100

#include <header.h>

int main_bench()
{
	int n,k,a[1000],i,j;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{
				my_printf("yes");
				break;
			}
		}
		if(a[i]+a[j]==k)
			break;
		if(i==n-2)
			my_printf("no");
	}
	return 0;
}

			


		



			




