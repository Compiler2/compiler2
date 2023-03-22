#include <header.h>

int main_bench()
{
	int a,b,c,d,e;
	int n;
	my_scanf ("%d",&n);
	a=n/10000;
	b=(n-10000*a)/1000;
	c=(n-10000*a-1000*b)/100;
	d=(n-10000*a-1000*b-100*c)/10;
	e=n-10000*a-1000*b-100*c-10*d;
	if (a!=0){
		my_printf("%d%d%d%d%d",e,d,c,b,a);
	}
	if ((a==0)&&(b!=0)){
		my_printf("%d%d%d%d",e,d,c,b);
	}
	if ((a==0)&&(b==0)&&(c!=0)){
		my_printf("%d%d%d",e,d,c);
	}
	if ((a==0)&&(b==0)&&(c==0)&&(d!=0)){
		my_printf("%d%d",e,d);
	}
	if ((a==0)&&(b==0)&&(c==0)&&(d==0)&&(e!=0))
		my_printf("%d",e);
	return 0;
}

