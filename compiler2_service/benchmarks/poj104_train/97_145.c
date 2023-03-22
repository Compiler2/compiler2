#include <header.h>

int main_bench()
{
	int n,b,ws,e,s,w,y;
	my_scanf("%d",&n);
	b=(n-n%100)/100;
	n=n-b*100;
	ws=(n-n%50)/50;
	n=n-50*ws;
	e=(n-n%20)/20;
	n=n-20*e;
	s=(n-n%10)/10;
	n=n-10*s;
	w=(n-n%5)/5;
	y=n-5*w;
	my_printf("%d\n",b);
	my_printf("%d\n",ws);
	my_printf("%d\n",e);
	my_printf("%d\n",s);
	my_printf("%d\n",w);
	my_printf("%d\n",y);
	

	return 0;
}