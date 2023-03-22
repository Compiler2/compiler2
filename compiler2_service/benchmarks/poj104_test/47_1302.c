#define NUM_ITER 53029

#include <header.h>

int main_bench()
{
	int i,n;
	int a[100];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d",&a[i-1]);
	}
	for(i=n;i>=2;i--){
		my_printf("%d ",a[i-1]);
	}
	my_printf("%d",a[0]);
	return 0;
}