#include <header.h>


int main_bench()
{   
	int a,b,c,d,e,f,k;
	my_scanf("%d",&k);
		a=k/100;
        k=k%100;
		b=k/50;
		k=k%50;
		c=k/20;
		k=k%20;
		d=k/10;
		k=k%10;
		e=k/5;
		k=k%5;
		f=k;

	my_printf("%d\n",a);
	my_printf("%d\n",b);
	my_printf("%d\n",c);
	my_printf("%d\n",d);
	my_printf("%d\n",e);
	my_printf("%d\n",f);
	
	return 0;
}