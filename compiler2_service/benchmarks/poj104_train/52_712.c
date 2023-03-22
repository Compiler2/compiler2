#define NUM_ITER 51021

#include <header.h>

int main_bench()
{
	int shu[200];
	int n,m,i,a;
	my_scanf("%d%d",&n,&m);
  	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a);
		shu[i]=a;
	}
  	for(i=100;i<100+m;i++)
	{
		shu[i]=shu[n-m+i-100];
		my_printf("%d ",shu[i]);
	}
  	for(i=100;i<100+n-m-1;i++)
	{
		shu[m+i]=shu[i-100];
		my_printf("%d ",shu[m+i]);
	}
	my_printf("%d\n",shu[n-m-1]);
	return 0;
}


