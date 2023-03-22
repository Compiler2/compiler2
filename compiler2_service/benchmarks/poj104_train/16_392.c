#define NUM_ITER 1461988

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e;
	my_scanf("%d",&n);
	a=n/10000;
	n=n-10000*a;
	b=n/1000;
	n=n-1000*b;
	c=n/100;
	n=n-100*c;
	d=n/10;
	e=n-10*d;
	if(a!=0)
		my_printf("%d%d%d%d%d",e,d,c,b,a);
	else
		if(b!=0)
			my_printf("%d%d%d%d",e,d,c,b);
		else
			if(c!=0)
				my_printf("%d%d%d",e,d,c);
			else
				if(d!=0)
					my_printf("%d%d",e,d);
				else
					my_printf("%d",e);
	return 0;
}

