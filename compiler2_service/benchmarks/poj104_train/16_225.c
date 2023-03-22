#include <header.h>

int main_bench()
{
	int n,a,b,c,d,m;
	my_scanf("%d",&n);
	m=n;
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	d=n%10;
	if(m<10) my_printf("%d",m);
		else
		if(m<100) my_printf("%d%d",a,b);
		else
			if(m<1000) my_printf("%d%d%d",a,b,c);
			else
				if(m<10000) my_printf("%d%d%d%d",a,b,c,d);
				return 0;
}