#define NUM_ITER 45670

#include <header.h>

int main_bench()
{
	int n,a[100],i,e;
	my_scanf("%d",&n);
	my_scanf("%d",&a[0]);
	for(i=1;i<n;i++){
		my_scanf(" %d",&a[i]);}
	for(i=0;i<n/2;i++){
		e=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=e;}
	my_printf("%d",a[0]);
	for(i=1;i<n;i++){
		my_printf(" %d",a[i]);}
	return 0;
}