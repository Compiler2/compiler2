#define NUM_ITER 53588

#include <header.h>

	int wuSeven(int a){
		if(a%7==0){
			return 0;
		}
		for(int num=a;num>0;num=num/10){
			if(num%10==7){
				return 0;
			}
		}
		return 1;
	}

int main_bench(){
    int n;
	int sum=0;
	my_scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(wuSeven(i)){
			sum=sum+i*i;
	}
	}
	my_printf("%d",sum);
	return 0;
}
