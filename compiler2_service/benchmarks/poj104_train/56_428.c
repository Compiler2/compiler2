#include <header.h>


int main_bench()
{
	int a,b,c,d,e,n;
	my_scanf("%d",&n);
	a=n/10000;
	b=(n-10000*a)/1000;
	c=(n-10000*a-1000*b)/100;
	d=(n-10000*a-1000*b-100*c)/10;
	e=n-10000*a-1000*b-100*c-10*d;
	if(a>0){
		my_printf("%d\n",e*10000+d*1000+c*100+b*10+a);}
	else{ if(b>0)
		my_printf("%d\n",e*1000+d*100+c*10+b);
	else{if(c>0)
		my_printf("%d\n",e*100+d*10+c);
		else{if(b>0)
		my_printf("%d\n",e*10+d);
		else
		my_printf("%d\n",e);}}
	}
	return 0;
}

