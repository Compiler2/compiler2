#define NUM_ITER 378855

#include <header.h>

int main_bench(){
	int n,m;
	my_scanf("%d",&n);
	if(n==1){
		my_printf("End");
		return 0;
	}else {
	while (1){
		if(n%2==0){
			m=n;
			n=n/2;
			my_printf("%d/2=%d",m,n);
			my_printf("\n");
		}else {
			m=n;
			n=3*n+1;
			my_printf("%d*3+1=%d",m,n);
			my_printf("\n");
		}
		if (n==1){
			break;
		}
	}
	my_printf("End");
	}
	return 0;
}

