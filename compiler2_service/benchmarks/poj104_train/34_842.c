#define NUM_ITER 379794

#include <header.h>

int main_bench(){
	int n,i,e,f;
	my_scanf("%d",&n);
	if(n==1){
		my_printf("End");
	}else{
		e=n;
		for(i=0;i<10000;i++){
			if(e%2!=0&&e!=1){
				f=e;
				e=e*3+1;
				my_printf("%d*3+1=%d\n",f,e);
			}else{
				f=e;
				e=e/2;
				my_printf("%d/2=%d\n",f,e);
			}
			if(e==1){
				my_printf("End");
				break;
			}
		}
	}
return 0;
}
