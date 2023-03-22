#define NUM_ITER 53400

#include <header.h>

int main_bench()
{
	int n, i, a[100], min=0, max=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d",&a[i-1]);
	}
	for(i=1;i<=n;i++){
		if(a[i-1]>max){
		max=a[i-1];
		}
	}
	my_printf("%d\n",max);
	for(i=1;i<=n;i++){
		if(a[i-1]<max&&a[i-1]>min){
		min=a[i-1];
		}
	}
	my_printf("%d\n",min);
	return 0;
}