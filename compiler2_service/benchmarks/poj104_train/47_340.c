#define NUM_ITER 47624

#include <header.h>

int main_bench(){
	int n,i,k,t;
	my_scanf("%d",&n);
	int a[100];
	for(i=0;i<n-1;i++){
		my_scanf("%d ",&a[i]);
	}
	if(i=n-1){
		my_scanf("%d",&a[i]);
	}
	int e;
	for(k=1;k<n/2+1;k++){
		e=a[n-k];
		a[n-k]=a[k-1];
		a[k-1]=e;
	}
	for(t=0;t<n-1;t++){
		my_printf("%d ",a[t]);
	}
	if(t=n-1){
		my_printf("%d",a[t]);
	}			
	return 0;
}