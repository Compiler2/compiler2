#define NUM_ITER 376918

#include <header.h>

int main_bench(){
	int n;
	int a;
	my_scanf("%d",&n);
	if(n==1){
		my_printf("End\n");
	}else if(n>1){
	while(1){
		if(n%2==0){
			a=n;
			n=a/2;
			my_printf("%d/2=%d\n",a,n);
			if(n==1){
				my_printf("End\n");
				return 0;
			}
		}else{
			a=n;
			n=a*3+1;
			my_printf("%d*3+1=%d\n",a,n);
			if(n==1){
				my_printf("End");
				return 0;
			}
		}
	}
	}
	return 0;
}

