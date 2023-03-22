#define NUM_ITER 1522304

#include <header.h>

int main_bench()
{
	int a,b,c,d,e;
	my_scanf("%d",&a);
	b=a%10;
	c=(int)(a/10)%10;
	d=(int)(a/100)%10;
	e=(int)(a/1000)%10;
	if(a>=0&&a<10)
		my_printf("%d\n",a);
	else if(a>=10&&a<100)
		my_printf("%d%d\n",b,c);
	else if(a>=100&&a<1000)
		my_printf("%d%d%d\n",b,c,d);
	else
		my_printf("%d%d%d%d\n",b,c,d,e);
	return 0;
}