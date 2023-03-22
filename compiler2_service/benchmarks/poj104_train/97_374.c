#define NUM_ITER 1050977

#include <header.h>

int main_bench()
{
	int n;
	int bai,wushi,ershi,shi,wu,yuan;
	my_scanf("%d",&n);
	bai=(n-n%100)/100;
	my_printf("%d\n",bai);
	wushi=((n-100*bai)-(n-100*bai)%50)/50;
	my_printf("%d\n",wushi);
	ershi=((n-100*bai-50*wushi)-(n-100*bai-50*wushi)%20)/20;
	my_printf("%d\n",ershi);
	shi=((n-100*bai-50*wushi-20*ershi)-(n-100*bai-50*wushi-20*ershi)%10)/10;
	my_printf("%d\n",shi);
	wu=((n-100*bai-50*wushi-20*ershi-10*shi)-(n-100*bai-50*wushi-20*ershi-10*shi)%5)/5;
	my_printf("%d\n",wu);
	yuan=n-100*bai-50*wushi-20*ershi-10*shi-5*wu;
	my_printf("%d\n",yuan);
	return 0;
}
