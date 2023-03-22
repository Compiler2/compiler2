#include <header.h>

int main_bench()
{
	int n;
	int b,ws,es,s,w,y;
	my_scanf("%d",&n);
	b=n/100;
	ws=(n%100)/50;
	es=(n%50)/20;
	s=(n-100*b-50*ws-20*es)/10;
	w=(n%10)/5;
	y=n%5;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",b,ws,es,s,w,y);
	return 0;
}
