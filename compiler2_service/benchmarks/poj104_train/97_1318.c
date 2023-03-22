#define NUM_ITER 1245523

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int a1=0;
	int a2=0;
	int a3=0;
	int a4=0;
	int a5=0;
	int a6=0;
	a1=n/100;
	a2=n%100/50;
	a3=(n-a1*100-a2*50)/20;
	a4=(n-a1*100-a2*50-a3*20)/10;
	a5=n%10/5;
	a6=n%5;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a1,a2,a3,a4,a5,a6);
}