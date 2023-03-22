#define NUM_ITER 1400017

#include <header.h>

int main_bench()
{
	int i;
	my_scanf("%d",&i);
	do
	{
		my_printf("%d",i%10);
		i=i/10;
		
	}while(i!=0);
		return 0;
}
