#define NUM_ITER 567213

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	my_printf("%d\n",n/100);
	my_printf("%d\n",(n-n/100*100)/50);
	my_printf("%d\n",(n-n/100*100-(n-n/100*100)/50*50)/20);
	my_printf("%d\n",(n-n/100*100-(n-n/100*100)/50*50-(n-n/100*100-(n-n/100*100)/50*50)/20*20)/10);
	my_printf("%d\n",(n-n/100*100-(n-n/100*100)/50*50-(n-n/100*100-(n-n/100*100)/50*50)/20*20-(n-n/100*100-(n-n/100*100)/50*50-(n-n/100*100-(n-n/100*100)/50*50)/20*20)/10*10)/5);
	my_printf("%d\n",n%5);
	return 0;
}