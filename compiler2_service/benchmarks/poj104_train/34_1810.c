#define NUM_ITER 299880

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	for(;n!=1;){
	if(n%2==0){
	my_printf("%d/%d=%d\n",n,2,n/2);
	n=n/2;
	}
	else{
	my_printf("%d*%d+%d=%d\n",n,3,1,n*3+1);
	n=n*3+1;
	}
	}
	if(n==1)
	my_printf("End");
  return 0;
}
