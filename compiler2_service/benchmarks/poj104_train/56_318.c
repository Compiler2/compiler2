#define NUM_ITER 1478500

#include <header.h>

int main_bench()
{
    int n,a,b,c,d,e,x;
	my_scanf("%d",&n);
	a=(int)n/10000;
	b=(int)(n-10000*a)/1000;
	c=(int)(n-10000*a-1000*b)/100;
	d=(int)(n-10000*a-1000*b-100*c)/10;
	e=(int)(n-10000*a-1000*b-100*c-10*d)/1;
	if(a!=0) x=e*10000+d*1000+c*100+b*10+a;
	else {if (b!=0) x=e*1000+d*100+c*10+b; 
		  else {if (c!=0) x=e*100+d*10+c;
		  else {if (d!=0) x=e*10+d;
		  else x=e;}}}
    my_printf("%d\n",x);
	return 0;
}