#include <header.h>

int main_bench()
{	
	int x,a,b,c,d,e,y;
	my_scanf("%d",&x);
	a=x/10000;
	b=(x-10000*a)/1000;
	c=(x-10000*a-1000*b)/100;
	d=(x-10000*a-1000*b-100*c)/10;
	e=x%10;
	y=a+10*b+100*c+1000*d+10000*e;
loop:if((y%10)!=0)
		 my_printf("%d",y);
	 else
	 { 
		 y=y/10;
		 goto loop;
	 }
}
