#define NUM_ITER 6086

#include <header.h>


int main_bench(){

	int n,i,m;
	int sz[300];

	my_scanf("%d",&n);

	for(i=0;i<n;i++){

		my_scanf("%d",&sz[i]);
	    
		if(i==0){

			my_printf("%d",sz[i]);
		}else{
            m=0;
			for(int k=0;k<i;k++){
				if(sz[i]==sz[k]){
					m=1;
				}
			}
			if(m==0){
				my_printf(",%d",sz[i]);
			}
		}
	}

	return 0;
}

