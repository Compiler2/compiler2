#define NUM_ITER 4485

#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	int sz[100];
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	int e;
	for(int k=1;k<n;k++){
		for(i=0;i<n-k;i++){
			e=sz[i];
			sz[i]=sz[i+1];
			sz[i+1]=e;
		}
	}
	for(i=0;i<n;i++){
	    if(i==0){
		my_printf("%d",sz[i]);
	}
	else{
		my_printf(" %d",sz[i]);
	}
	}
	return 0;
}