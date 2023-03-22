#define NUM_ITER 44474

#include <header.h>

int main_bench()
{
	int a[100],b[100],i,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++){
		a[i]=b[n-i-1];
	}
	my_printf("%d",a[0]);
	for(i=1;i<n;i++){
	my_printf(" %d",a[i]);
	}
	return 0;
}

