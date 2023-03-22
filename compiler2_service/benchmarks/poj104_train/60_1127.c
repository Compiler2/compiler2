#define NUM_ITER 15539

#include <header.h>

int sushu(int n);
int main_bench(){
	int n,i;
	my_scanf("%d",&n);
	if(n<5){
		my_printf("empty");
	}else{
	for(i=2;i<=n-2;i++){
		if(sushu(i)==1&&sushu(i+2)==1){
			my_printf("%d %d\n",i,i+2);
		}
	}
	}
		return 0;
	}

	int sushu(int x){
		int i;
		if(x==2){
			return 1;
		}else{
		for(i=2;i<x;i++){
			if(x%i==0){
				return 0;
			}
		}
		return 1;
		}
	}

