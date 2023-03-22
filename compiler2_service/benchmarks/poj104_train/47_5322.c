#define NUM_ITER 51860

#include <header.h>

int main_bench()
{
	int a[100],b[100],n,i,*p,*q;
	my_scanf("%d",&n);
	for(p=a;p<a+n;p++)
		my_scanf("%d",p);
	q=b;
	p--;
	for(i=0;i<n;i++)
		*q++=*p--;
	q=b;
	for(i=0;i<n-1;i++)
		my_printf("%d ",*q++);
	my_printf("%d",*q);
}