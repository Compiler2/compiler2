#define NUM_ITER 56384

#include <header.h>

int main_bench()
{
	int i,n,m,a[100];
	int *p1,*p2,*p3,*p4;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	p1=&a[0];
	p4=p2=&a[n-m];
	p3=&a[n-1];
	my_printf("%d",*p2);
	p2++;
	for(;p2<=p3;p2++)
	{
		my_printf(" %d",*p2);
	}
	for(;p1<p4;p1++)
	{
		my_printf(" %d",*p1);
	}
 	return 0;
}