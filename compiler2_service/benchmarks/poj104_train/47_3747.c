#define NUM_ITER 49757

#include <header.h>

int main_bench()
{
	int n,a[100],i,b[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		b[n-i-1]=a[i];
	}
	for(i=0;i<n;i++){
		a[i]=b[i];
		if(i==0){
			my_printf("%d",a[i]);}
		else{
			my_printf(" %d",a[i]);}
	}
	return 0;
}