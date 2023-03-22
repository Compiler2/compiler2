#define NUM_ITER 32548

#include <header.h>

int main_bench(){
	int n,i,j,sz[1000],sx[1000];
	my_scanf("%d",&n);
	double sum;
	for(i=0;i<n;i++){
		my_scanf("%d %d",&sz[i],&sx[i]);
		

	}
	for(j=1;j<n;j++){
		if(((double)sx[j]/(double)sz[j]-(double)sx[0]/(double)sz[0])>0.05){
			my_printf("better\n");
		}
		else if(((double)sx[0]/(double)sz[0]-(double)sx[j]/(double)sz[j])>0.05){
			my_printf("worse\n");
		}
		else{
			my_printf("same\n");
		}
	}
	return 0;
}
  