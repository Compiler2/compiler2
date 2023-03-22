#define NUM_ITER 50160

#include <header.h>

int main_bench(){
	int n,e;
	my_scanf("%d",&n);
	int sz[100];
	for(int i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}

	for(int k=0;k<n/2;k++){
			e=sz[k];
			sz[k]=sz[n-1-k];
			sz[n-1-k]=e;
		}
         my_printf("%d",sz[0]);
	for(int j=1;j<n;j++){
		my_printf(" %d",sz[j]);
	}
         
	return 0;
}