#define NUM_ITER 50571

#include <header.h>

int main_bench(){
	int n,i;
	int sz[100];
	int t;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<n/2;i++){
		t=sz[i];
		sz[i]=sz[n-i-1];
		sz[n-i-1]=t;
	}
	for(i=0;i<n;i++){
		if(i<=n-2){
		my_printf("%d ",sz[i]);
		}else{
		my_printf("%d",sz[i]);
		}
	}
	return 0;
}