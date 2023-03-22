#include <header.h>

int main_bench(){
	int a[10000],n,b,i;
	i=1;
	my_scanf("%d",&n);
	while(i<n){
		my_scanf("%d ",&a[i]);
		i++;
	}
	my_scanf("%d",&a[n]);
	i=1;
	while(i<=n/2){
		b=a[n-i+1];
		a[n-i+1]=a[i];
		a[i]=b;
		i++;
	}
	i=1;
	while(i<n){
		my_printf("%d ",a[i]);
		i++;
	}
	my_printf("%d",a[n]);
	return 0;
}