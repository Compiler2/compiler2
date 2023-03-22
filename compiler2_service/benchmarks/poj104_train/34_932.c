#define NUM_ITER 287601

#include <header.h>

int main_bench()
{
	int n,sum=0;
	my_scanf("%d",&n);
	while(n!=1){
		if(n%2!=0){
			sum=n*3+1;
			my_printf("%d*3+1=%d\n",n,sum);
			n=sum;
			sum=0;
		}
		if(n%2==0){
			sum=n/2;
			my_printf("%d/2=%d\n",n,sum);
			n=sum;
			sum=0;
		}
	}
	my_printf("End");
	return 0;

		}