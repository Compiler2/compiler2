#include <header.h>

int main_bench()
{
	int num,a,b,c,d,e,n;
	int mun;

	my_scanf("%d",&num);

	a=num/10000;
	b=(num%10000)/1000;
	c=(num%1000)/100;
	d=(num%100)/10;
	e=num%10;

	if(a>0) n=1;
	else if(b>0) n=10;
	else if(c>0) n=100;
	else if(d>0) n=1000;
	else if(e>0) n=10000;
	else n=100000;

	mun=(a*1+b*10+c*100+d*1000+e*10000)/n;
	
	my_printf("%d\n",mun);
}