#define NUM_ITER 57703

#include <header.h>

int main_bench()
{
	int n,m,a[100],*p,i;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	p=a;
	p=&a[n-m];
	my_printf("%d",*p);
	for(i=1;i<m;i++)
		my_printf(" %d",*(p+i));
	p=a;
	for(i=0;i<(n-m);i++)
		my_printf(" %d",*(p+i));
}
