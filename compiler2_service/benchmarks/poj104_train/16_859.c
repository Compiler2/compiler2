#define NUM_ITER 1649833

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,n;
	my_scanf("%d",&n);
	a=(int)(n/10000);
	b=(int)((n-a*10000)/1000);
	c=(int)((n-a*10000-b*1000)/100);
	d=(int)((n-a*10000-b*1000-c*100)/10);
	e=(int)(n-a*10000-b*1000-c*100-d*10);
	if(a!=0)
	my_printf("%d%d%d%d%d",e,d,c,b,a);
	else if(b!=0)
	my_printf("%d%d%d%d",e,d,c,b);
	else if(c!=0)
	my_printf("%d%d%d",e,d,c);
	else if(d!=0)
	my_printf("%d%d",e,d);
	else 
	my_printf("%d",e);
	return 0;
}