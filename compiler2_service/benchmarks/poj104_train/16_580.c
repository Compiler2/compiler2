#define NUM_ITER 1735687

#include <header.h>

int main_bench()
{
	int t,a,b,c,d,e;
	my_scanf("%d",&t);
	a=t/10000;
	b=t/1000-10*a;
	c=t/100-100*a-10*b;
	d=t/10-1000*a-100*b-10*c;
	e=t%10;
	if(a) my_printf("%d%d%d%d%d",e,d,c,b,a);
	else 
		if(b) my_printf("%d%d%d%d",e,d,c,b);
		else
			if(c) my_printf("%d%d%d",e,d,c);
			else
				if(b) my_printf("%d%d",e,d);
				else
					my_printf("%d",e);
	return 0;
}
