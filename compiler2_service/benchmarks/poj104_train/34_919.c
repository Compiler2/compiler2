#define NUM_ITER 394596

#include <header.h>

int main_bench(){
	int n,sum;
	my_scanf("%d",&n);
	sum=n;
	if(n==1){
	my_printf("End");
	}
	while(n!=1){
		if(n%2==0){
			sum/=2;
			my_printf("%d/2=%d\n",n,sum);
			n=sum;
		}else{
			sum=3*n+1;
			my_printf("%d*3+1=%d\n",n,sum);
			n=sum;
		}
		if(sum==1){
			my_printf("End");
			break;
		}
	}
	return 0;
}