#define NUM_ITER 305044

#include <header.h>

int main_bench()
{
	int i,n,t=2,l,j;
	my_scanf("%d",&n);
	for(i=0;n!=1;i++){
		if(n%2==0){
			my_printf("%d/2=%d\n",n,n/2);
			t=0;
		}
		else{
			my_printf("%d*3+1=%d\n",n,n*3+1);
			t=1;
		}
		if(t==0){
			n=n/2;
		}
		if(t==1){
			n=n*3+1;
		}
	}
	my_printf("End");
			

	return 0;
}



