#define NUM_ITER 48490

#include <header.h>

int main_bench()
{
	int  a[100],m,n;
	my_scanf("%d %d",&n,&m);
	int i;
	for (i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	int *p[100];
	for (i=0;i<n-m;i++)
		p[i+m]=&a[i];
	for (i=n-m;i<n;i++)
		p[i-n+m]=&a[i];
	for (i=0;i<n-1;i++)
		my_printf("%d ",*p[i]);
	my_printf("%d\n",*p[n-1]);
}