#define NUM_ITER 1516147

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e,f;
	my_scanf("%d",&n);
	a=n/10000;
	b=(n-a*10000)/1000;
	c=(n-a*10000-b*1000)/100;
	e=n%10;
	d=(n%100-e)/10;
	if(a!=0) my_printf("%d%d%d%d%d",e,d,c,b,a);
	else if(b!=0) my_printf("%d%d%d%d",e,d,c,b);
	else if(c!=0) my_printf("%d%d%d",e,d,c);
	else if(d!=0) my_printf("%d%d",e,d);
	else my_printf("%d",e);
	return 0;
} 
