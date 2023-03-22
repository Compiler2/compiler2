#define NUM_ITER 1152046

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e,f;
	my_scanf("%d",&n);
    if(n>=1000||n<1)
		my_printf("error\n");
	else{
		a=n/100; n=n%100;
		b=n/50; n=n%50;
		c=n/20; n=n%20;
		d=n/10;n=n%10;
		e=n/5;n=n%5;
		f=n;

	my_printf("%d\n",a);
	my_printf("%d\n",b);
	my_printf("%d\n",c);
	 my_printf("%d\n",d);
	 my_printf("%d\n",e);
	 my_printf("%d",f);}
	return 0;
}
