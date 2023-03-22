#define NUM_ITER 47511

#include <header.h>

int main_bench()
{
	int m,n,a[200]={0},i;
my_scanf("%d",&n);
my_scanf("%d",&m);
for(i=0;i<n;i++)
{
	my_scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	a[i+n]=a[i];
}
for(i=n-m;i<2*n-m-1;i++)
{
		my_printf("%d ",a[i]);
}
my_printf("%d",a[2*n-m-1]);

return 0;
}