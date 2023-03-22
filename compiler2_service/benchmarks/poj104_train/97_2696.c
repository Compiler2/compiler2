#include <header.h>

int main_bench(){

	int m,a,b,c,d,e,f;
	a=0;
	b=0;
	c=0;
	d=0;
	e=0;
	f=0;
	my_scanf("%d",&m);
	
	a=m/100;
	b=(m-a*100)/50;
	c=(m-a*100-b*50)/20;
	d=(m-a*100-b*50-c*20)/10;
	e=(m-a*100-b*50-c*20-d*10)/5;
	f=(m-a*100-b*50-c*20-d*10-e*5);
		my_printf ("%d\n",a);
		my_printf ("%d\n",b);
		my_printf ("%d\n",c);
		my_printf ("%d\n",d);
		my_printf ("%d\n",e);
		my_printf ("%d\n",f);
return 0;
}
