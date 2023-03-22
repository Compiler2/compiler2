#define NUM_ITER 53185

#include <header.h>

int main_bench()
{
    int a[200],i,n,m;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	    if(i<n-m)
			a[i+m+n]=a[i];
		if(i>=n-m)
			a[i+m]=a[i];
	}
	for(i=0;i<n-1;i++)
	     my_printf("%d ",a[i+n]);
	my_printf("%d",a[2*n-1]);
return 0;
}
	