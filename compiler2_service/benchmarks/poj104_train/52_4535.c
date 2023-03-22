#define NUM_ITER 46617

#include <header.h>

int main_bench()
{
	int n,m,a[100],i,b;
	my_scanf("%d %d",&n,&m);
	my_scanf("%d",&a[0]);
	for(i=1;i<n;i++)
	my_scanf(" %d",&a[i]);
	b=n-m;
    for (i=0; i<n-1; i++)
	my_printf("%d ", a[(i+b)%n]);
	my_printf("%d",a[n-m-1]);
}
