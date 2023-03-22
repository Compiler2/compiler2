#define NUM_ITER 9935

#include <header.h>

int main_bench()
{
	int n,a[301],i,h,k;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
		for(h=1;h<i;h++)
		{
			if(a[i]==a[h])
			{
				i--;
				n--;
				break;
			}
		}
	}
	my_printf("%d",a[1]);
	for(i=2;i<=n;i++)
		my_printf(",%d",a[i]);
	my_printf("\n");
}