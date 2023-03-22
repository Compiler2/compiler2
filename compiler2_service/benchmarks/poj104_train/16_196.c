#define NUM_ITER 1522725

#include <header.h>

int main_bench()
{
	int n,a,b,c,d;
	my_scanf("%d",&n);
	a=n/1000;
	b=n/100-10*a;
	c=n/10-100*a-10*b;
	d=n-1000*a-100*b-10*c;
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			{
				my_printf("%d\n",d);
			}
			else
				my_printf("%d%d\n",d,c);
		}
		else
			my_printf("%d%d%d\n",d,c,b);
	}
	else
		my_printf("%d%d%d%d\n",d,c,b,a);
	return 0;
}