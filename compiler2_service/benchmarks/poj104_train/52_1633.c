#define NUM_ITER 6188

#include <header.h>

int main_bench()
{
	int i,j,n,m,a[101],*p;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	p=a+n-1;
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
			*(p-i+1)=*(p-i);
		*(p-n+1)=*(p+1);
	}
	for(i=0;i<n-1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[n-1]);
}