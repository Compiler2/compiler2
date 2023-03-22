#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e,f,m;
	my_scanf("%d",&n);
	int i;
	i=n/100;
	my_printf("%d\n",i);
	a=n-i*100;
	m=a/50;
	
		my_printf("%d\n",m);
		b=(a-50*m)/20;
		my_printf("%d\n",b);
		c=(a-50*m-b*20)/10;
		my_printf("%d\n",c);
		d=a-a/10*10;
		e=d/5;
		my_printf("%d\n",e);
		f=d-5*e;
		my_printf("%d\n",f);
	


	return 0;


}