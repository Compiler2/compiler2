#define NUM_ITER 1494404

#include <header.h>

int main_bench()
{
	int a;
	my_scanf("%d",&a);
	int b,c,d,e,f,g,h,i,j,k;
	b=a/100;
	c=(a-b*100)/50;
	d=(a-b*100-c*50)/20;
	e=(a-b*100-c*50-d*20)/10;
	f=(a-b*100-c*50-d*20-e*10)/5;
	g=a-b*100-c*50-d*20-e*10-f*5;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",b,c,d,e,f,g);
	return 0;
}