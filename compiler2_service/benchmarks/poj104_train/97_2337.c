#define NUM_ITER 821773

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e,f;
	my_scanf("%d",&n);
	a=(int)(n/100);
	b=(int)((n%100)/50);
	c=(int)(((n%100)%50)/20);
	d=(int)((((n%100)%50)%20)/10);
    e=(int)(((((n%100)%50)%20)%10)/5);
	f=(int)(((((n%100)%50)%20)%10)%5);
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}