#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,m;
	a=0;
	b=0;
	c=0;
	d=0;
	e=0;
	f=0;
	my_scanf("%d",&m);
	while(m>=100)
	{
		m=m-100;
		a=a+1;
	}
	while(m>=50)
	{
		m=m-50;
		b=b+1;
	}
	while(m>=20)
	{
		m=m-20;
		c=c+1;
	}
	while(m>=10)
	{
		m=m-10;
		d=d+1;
	}
	while(m>=5)
	{
		m=m-5;
		e=e+1;
	}
	while(m>=1)
	{
		m=m-1;
		f=f+1;
	}
	my_printf("%d\n",a);
	my_printf("%d\n",b);
	my_printf("%d\n",c);
	my_printf("%d\n",d);
	my_printf("%d\n",e);
	my_printf("%d\n",f);
	return 0;
}