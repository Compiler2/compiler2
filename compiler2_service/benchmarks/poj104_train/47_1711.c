#define NUM_ITER 56271

#include <header.h>

int main_bench()
{
	int a[100],n,i,b;
	int * p;
	my_scanf("%d",&n);
	for(i=0;i<n;i++) my_scanf("%d",&a[i]);
	p=&a[n-1];
	for(i=0;i<n-1;i++) 
	{
		b= * p;
		my_printf("%d ",b);
		p=p-1;
	}
	b= * p;
	my_printf("%d",b);
	return 0;
}