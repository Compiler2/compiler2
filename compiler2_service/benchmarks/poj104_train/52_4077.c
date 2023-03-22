#define NUM_ITER 52708

#include <header.h>

int main_bench()
{
	int i,n,m,*p;
	my_scanf("%d%d",&n,&m);
	p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		my_scanf("%d",p+i);
	for(i=n-m;i<n;i++)
		my_printf("%d ",*(p+i));
	for(i=0;i<n-m-1;i++)
		my_printf("%d ",*(p+i));
	my_printf("%d\n",*(p+i));
}
