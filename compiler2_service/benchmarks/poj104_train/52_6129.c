#define NUM_ITER 52738

#include <header.h>

int main_bench()
{
	int n,m,q,i,k;
	my_scanf("%d",&n);
	my_scanf("%d",&m);
	int *a=(int*)malloc(sizeof(int)*n);
    for (i=0;i<n;i++)
	{
	    my_scanf("%d",&a[i]);
	}
	for(k=0;k<n-m;k++)
	{
		q=a[0];
	     for(i=0;i<n-1;i++)
		 {
		     a[i]=a[i+1];
		 }
		 a[n-1]=q;
	}


	for (i=0;i<n-1;i++)
	{
	     my_printf("%d ",a[i]);
	}
	my_printf("%d",a[n-1]);
	return 0;
}
