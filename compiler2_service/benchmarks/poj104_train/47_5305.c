#define NUM_ITER 45998

#include <header.h>


int main_bench(){

	int sz[100];
	int i,n;
	int e;

	my_scanf("%d",&n);

	my_scanf("%d",&sz[0]);

	for(i=1;i<n;i++){
	  my_scanf(" %d",&sz[i]);
	}

	if(n%2==0){
		for(i=0;i<n/2;i++){
			e=sz[i];
			sz[i]=sz[n-i-1];
			sz[n-1-i]=e;
		}
	}else{

		for(i=0;i<(n-1)/2;i++){
		    e=sz[i];
			sz[i]=sz[n-i-1];
			sz[n-1-i]=e;
		}
	}

    my_printf("%d",sz[0]);

	for(i=1;i<n;i++){
	  my_printf(" %d",sz[i]);
	}
	return 0;
}
