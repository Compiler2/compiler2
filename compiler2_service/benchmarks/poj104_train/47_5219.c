#define NUM_ITER 57555

#include <header.h>

int main_bench()
{
	int n,i,a[100];
	int *p;
	p=a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",p+i);
	for(i=n-1;i>0;i--)
		my_printf("%d ",*(p+i));
	my_printf("%d\n",*p);
}
	