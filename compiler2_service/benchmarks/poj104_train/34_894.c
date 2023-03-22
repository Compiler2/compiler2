#define NUM_ITER 379880

#include <header.h>

int main_bench()
{
	int n,i;
	int s;
	my_scanf("%d",&n);
	s=n;
	if(n==1){
		my_printf("End");
	}
	else{
		for(s=s;s!=1;i++){
			if(n%2==0){
				s=s/2;
				my_printf("%d/2=%d\n",n,s);
				n=s;
			}
			else{
				s=s*3+1;
				my_printf("%d*3+1=%d\n",n,s);
				n=s;
			}
		}
		my_printf("End");
	}
	return 0;
}

