#define NUM_ITER 56015

#include <header.h>

int main_bench()
{
    int n,i,j;
	int a[100];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
      my_scanf("%d",&a[i]);
	my_printf("%d",a[n]);
	for(i=n-1;i>0;i--)
		my_printf(" %d",a[i]);
	return 0;
}
