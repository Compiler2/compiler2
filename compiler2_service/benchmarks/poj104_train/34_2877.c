#define NUM_ITER 321305

#include <header.h>

int main_bench(){
	int n,p;
	my_scanf("%d",&n);
	if(n!=1){
	 for(;;){
		if(n%2==0){
			p=n/2;
			my_printf("%d/2=%d\n",n,p);
			n=p;
			if(n==1){
				break;
			}
		}
		else{
			p=n*3+1;
			my_printf("%d*3+1=%d\n",n,p);
			n=p;
			if(n==1){
				break;
			}
		}
	 }
	}
		my_printf("End");
		return 0;
	}	