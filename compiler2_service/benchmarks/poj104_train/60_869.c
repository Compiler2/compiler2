#define NUM_ITER 3830

#include <header.h>

int zhishu(int n){
	int m=0;
	for(int i=2;i<n;i++){
		if(n%i==0)
			m++;
	}
	if(m==0&&n!=1){
		return 1;
	}else{
		return 0;
	}
}
int main_bench(){
	int n,m=0;
	my_scanf("%d",&n);
	for(int i=1;i<=n-2;i++){
		if(zhishu(i)&&zhishu(i+2)){
			my_printf("%d %d\n",i,i+2);
			m++;
		}
	}
	if(m==0){
		my_printf("empty\n");
	}
    return 0;
}