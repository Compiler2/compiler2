#include <header.h>


int main_bench()
{
	int n,a,b,c,d,e,y;
	my_scanf("%d",&n);
	a=n/10000;
	b=(n-10000*a)/1000;
	c=(n-10000*a-1000*b)/100;
	d=(n-10000*a-1000*b-100*c)/10;
	e=n-10000*a-1000*b-100*c-10*d;
	if(a!=0) {my_printf("%d",e);
	          my_printf("%d",d);
			  my_printf("%d",c);
			  my_printf("%d",b);
			  my_printf("%d",a);}
		else if(b!=0) {my_printf("%d",e);
	          my_printf("%d",d);
			  my_printf("%d",c);
			  my_printf("%d",b);}
		else if(c!=0) {my_printf("%d",e);
	          my_printf("%d",d);
			  my_printf("%d",c);}
		else if(d!=0) {my_printf("%d",e);
	          my_printf("%d",d);}
		else {my_printf("%d",e);}
	return 0;
}
