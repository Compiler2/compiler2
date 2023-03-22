#define NUM_ITER 1644783

#include <header.h>

int main_bench()
{
	int x,a,b,c,d;
	my_scanf("%d",&x);
	a=x/1000;
	b=x/100%10;
	c=x/10%10;
	d=x%10;
	if(a==0)
		if(b==0)
			if(c==0)
				my_printf("%d",d);
			else my_printf("%d%d",d,c);
		else my_printf("%d%d%d",d,c,b);
	else my_printf("%d%d%d%d",d,c,b,a);
}

