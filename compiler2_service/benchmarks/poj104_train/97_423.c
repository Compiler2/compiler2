#define NUM_ITER 1053082

#include <header.h>

int main_bench()
{
	int n,a1,a2,b1,b2,c1,c2,d1,d2,e1,e2,f1,f2;
	my_scanf("%d",&n);
	a1=n/100;
	a2=n%100;
	b1=a2/50;
	b2=a2%50;
	c1=b2/20;
	c2=b2%20;
	d1=c2/10;
	d2=c2%10;
	e1=d2/10;
	e2=d2%10;
	f1=e2/5;
	f2=e2%5;
	my_printf("%d\n",a1);
	my_printf("%d\n",b1);
	my_printf("%d\n",c1);
	my_printf("%d\n",d1);
	my_printf("%d\n",f1);
	my_printf("%d\n",f2);
	return 0;
}
