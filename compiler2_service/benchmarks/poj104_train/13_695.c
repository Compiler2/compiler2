#define NUM_ITER 6217

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d\n",&n);
	int a[20000];
	int i,j;
	for(i=0;i<=n-1;i++)
		my_scanf("%d",&a[i]);
	my_printf("%d",a[0]);
    for(i=1;i<=n-1;i++)
	{
		int k;
		k=0;
		for(j=1;j<=i-1;j++)
		{
		  if(a[i]!=a[j])
			  k=k+0;
		  else
			  k=k+1;
		}
		if(k==0 && a[i]!=a[0])
			my_printf(" %d",a[i]);
	}
	return 0;
}