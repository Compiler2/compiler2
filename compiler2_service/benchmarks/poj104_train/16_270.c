#define NUM_ITER 1639731

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,x;
	my_scanf("%d",&n);
	
	a=n%10;
	b=(n%100-a)/10;
	c=(n%1000-b*10-a)/100;
	d=(n-c*100-b*10-a)/1000;
	if(n<10)
	{x=a;
	my_printf("%d\n",x);}
	else if(n<100)
	{x=a*10+b;
	my_printf("%02d\n",x);}
	else if(n<1000)
	{x=a*100+b*10+c;
	my_printf("%03d\n",x);}
	else if(n<10000)
	{x=a*1000+b*100+c*10+d;
	my_printf("%04d\n",x);}
	return 0;
}
