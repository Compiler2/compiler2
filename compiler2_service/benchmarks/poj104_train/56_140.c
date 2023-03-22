#define NUM_ITER 1433853

#include <header.h>


int main_bench()
{
	int x,y;
	my_scanf("%d",&x);
	do{
		y=x%10;
		my_printf("%d",y);
		x/=10;
	}while(x);
	return 0;
}
