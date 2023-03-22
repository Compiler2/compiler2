#define NUM_ITER 263950

#include <header.h>

int main_bench(){
	int n,i;
	my_scanf("%d",&n);
	if(n!=1){
		while(1){
			if(n%2!=0&&n!=1){
			    n=n*3+1;
			    my_printf("%d*3+1=%d\n",(n-1)/3,n);
			}else if(n%2==0&&n!=1){
		    	n=n/2;
		    	my_printf("%d/2=%d\n",2*n,n);
			}else if(n==1){
				my_printf("End");
			    break;
			}
		}
	}else if(n==1){
		my_printf("End");
	}
    return 0;
}

