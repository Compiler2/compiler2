#define NUM_ITER 3817

#include <header.h>




int sushu(int x){
	int i,count=0,result;
	for(i=2;i<x;i++){
		if(x%i==0){
			count++;
		}
	}
	if(count==0){
		result=1;
	}
	else{
		result=0;
	}
	return result;
}
int main_bench()
{
	int n,i,sum=0;
	my_scanf("%d",&n);
	int sushu(int x);
	for(i=2;i<=n-2;i++){
		if(sushu(i)){
			if(sushu(i+2)){
				my_printf("%d %d\n",i,i+2);
				sum++;
			}
		}
	}
	if(sum==0){
		my_printf("empty");
	}
	return 0;
}
