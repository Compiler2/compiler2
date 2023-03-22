#define NUM_ITER 49949

#include <header.h>

int main_bench()
{
	int i,m,n,a[100],*out[100];
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		out[i]=&a[n-m+i];
	}
	for(i=m;i<n;i++)
	{
		out[i]=&a[i-m];
	}
	for(i=0;i<n-1;i++)
	{
	    my_printf("%d ",*out[i]);
	}
    my_printf("%d",*out[n-1]);
}


