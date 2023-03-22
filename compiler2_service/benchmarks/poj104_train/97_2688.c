#define NUM_ITER 1252150

#include <header.h>

int main_bench()
{
	int m,a,b,c,d,e,f;
	int a1,b1,c1,d1,e1;
	my_scanf("%d",&m);
	a=m/100;
	my_printf("%d\n",a);
	a1=m-a*100;
	b=a1/50;
	my_printf("%d\n",b);
	b1=a1-b*50;
	c=b1/20;
	my_printf("%d\n",c);
	c1=b1-c*20;
	d=c1/10;
	my_printf("%d\n",d);
	d1=c1-d*10;
	e=d1/5;
	my_printf("%d\n",e);
	e1=d1-e*5;
	f=e1;
	my_printf("%d\n",f);

}