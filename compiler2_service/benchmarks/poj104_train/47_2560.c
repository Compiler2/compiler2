#define NUM_ITER 53540

#include <header.h>

int main_bench()
{
	int n,i,j;
	my_scanf("%d\n",&n);
	int a[200],b[200];
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
		j=n+1-i;
		b[j]=a[i];
	}
	j=1;
	while(j<n)
	{
		my_printf("%d ",b[j]);
		j=j+1;
	}
	my_printf("%d",b[j]);
	return 0;
}