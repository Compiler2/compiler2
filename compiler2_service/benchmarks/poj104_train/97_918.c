#define NUM_ITER 1037814

#include <header.h>



int main_bench()
{
    int a;
	int b,c,d,e,f,g;
	my_scanf("%d",&a);
	b=(a-a%100)/100;
	c=((a-b*100)-(a-b*100)%50)/50;
	d=((a-b*100-c*50)-(a-b*100-c*50)%20)/20;
	e=((a-b*100-c*50-d*20)-(a-b*100-c*50-d*20)%10)/10;
	f=((a-b*100-c*50-d*20-e*10)-(a-b*100-c*50-d*20-e*10)%5)/5;
	g=((a-b*100-c*50-d*20-e*10-f*5)-(a-b*100-c*50-d*20-e*10-f*5)%1)/1;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d",b,c,d,e,f,g);
	return 0;
}