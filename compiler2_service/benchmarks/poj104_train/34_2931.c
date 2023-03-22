#define NUM_ITER 262462

#include <header.h>

int main_bench(){
	int n,i,d;
	my_scanf("%d",&n);
	for(i=0;i>=0;i++){
		if(n==1){
			my_printf("End\n");
			break;
		}
		else if(n%2!=0){
			d=n*3+1;
			my_printf("%d*3+1=%d\n",n,d);
		}
		else if(n%2==0){
			d=n/2;
			my_printf("%d/2=%d\n",n,d);
		}
		n=d;
	}
	return 0;
}