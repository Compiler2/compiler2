#define NUM_ITER 1531909

#include <header.h>


main_bench()
{
	int a,b,c,d,e,f,g,h,n;
	my_scanf("%d",&n);
	a=n%10;
	b=n/10;
	c=b%10;
	d=b/10;
	e=d%10;
	f=d/10;
	g=f%10;
	h=f/10;
	switch((b>0)+(d>0)+(f>0)+(h>0))
	{
	case 0:
		my_printf("%d\n",a);
		break;
	case 1:
		my_printf("%d\n",a*10+c);
		break;
	case 2:
		my_printf("%d\n",a*100+c*10+e);
		break;
	case 3:
		my_printf("%d\n",a*1000+c*100+e*10+g);
		break;
	case 4:
		my_printf("%d\n",a*10000+c*1000+e*100+g*10+h);
	}
}
