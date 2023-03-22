#define NUM_ITER 15662

#include <header.h>

int main_bench(){
	int n,i,t,j;
	my_scanf("%d",&n);
	if(n<=4){
		my_printf("empty");
	}
	for(i=3;i<=n-2;i++){
		t=i+2;
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(j==i){
			for(j=2;j<t;j++){
				if(t%j==0){
				break;
				}
			}
			if(t==j){
				my_printf("%d %d\n",i,t);
			}
		}
	}
	return 0;
}