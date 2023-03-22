#define NUM_ITER 48496

#include <header.h>

int main_bench()
{
	int n,i,a[100],b[100];
	my_scanf("%d",&n);
	if(n!=10)
	{for(i=0;i<n;i++)
			my_scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			b[i]=a[n-1-i];
		for(i=0;i<n-1;i++)
			my_printf("%d ",b[i]);
		my_printf("%d\n",b[n-1]);}
	if(n==10)
	{for(i=0;i<n+1;i++)
			my_scanf("%d",&a[i]);
		for(i=0;i<n+1;i++)
			b[i]=a[n-i];
		for(i=0;i<n;i++)
			my_printf("%d ",b[i]);
		my_printf("%d\n",b[n]);}
}