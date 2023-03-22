#define NUM_ITER 56226

#include <header.h>

int main_bench()
{
	int i,k,j,n,m,a[100];
	int *p;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
    
	p=&a[n-m];
	for(k=n-m;k<n;k++,p++)
	    my_printf("%d ",*p);
	p=&a[0];
	for(j=0;j<n-m-1;j++,p++)
		my_printf("%d ",*p);
	my_printf("%d",a[n-m-1]);

}