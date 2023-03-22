#define NUM_ITER 1121307

#include <header.h>

int main_bench()
{
	int a,z,x,c,v,b,n,y,t;
	my_scanf("%d",&a);
    z=(a-a%100)/100;
	x=(a-100*z-(a-100*z)%50)/50;
	y=a-100*z-50*x;
	c=(y-y%20)/20;
	v=(y-20*c-(y-20*c)%10)/10;
	t=a%10;
	b=(t-t%5)/5;
	n=t-5*b;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",z,x,c,v,b,n);
}
