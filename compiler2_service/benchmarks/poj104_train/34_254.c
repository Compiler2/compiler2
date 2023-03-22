#define NUM_ITER 347380

#include <header.h>


int main_bench()
{

    int n,x,y;
    my_scanf("%d",&n);

    while(n!=1){
	if(n%2==0){
		n=n/2;
		x=n*2;
		my_printf("%d/2=%d\n",x,n);
	}
	else{
		n=n*3+1;
		y=(n-1)/3;
		my_printf("%d*3+1=%d\n",y,n);
	}
    }

    if(n==1)
    my_printf("End\n");

    return 0;
}
