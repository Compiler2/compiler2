#define NUM_ITER 1623054

#include <header.h>

int main_bench()
{
	unsigned int a,b,c,d,e,f,x;
	my_scanf("%d",&a);
	b=a/10000;
	c=(a-10000*b)/1000;
	d=(a-10000*b-1000*c)/100;
	e=(a-10000*b-1000*c-100*d)/10;
	f=a-10000*b-1000*c-100*d-10*e;

	if(b>0) x=10000*f+1000*e+100*d+10*c+b;
	else if(b=0,c>0) x=1000*f+100*e+10*d+c;
	else if(b=0,c=0,d>0) x=100*f+10*e+d;
	
	my_printf("%d",x);
}