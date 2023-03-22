#define NUM_ITER 57657

#include <header.h>

int main_bench(){
    int sz[100];
	int i,b,n;
	i=0;
    my_scanf("%d",&n);
	b=n-1;
	for(i=0;i<n;i++){
           my_scanf("%d",&sz[i]);
	}
	for(b=n-1;b>0;b--){
		my_printf("%d ",sz[b]);
	}
	    b=0;
		my_printf("%d",sz[b]);

	
	return 0;
}
     