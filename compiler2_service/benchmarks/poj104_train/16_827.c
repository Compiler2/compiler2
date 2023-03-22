#define NUM_ITER 1638645

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,i;
	my_scanf("%d",&n);
	a=n/1000;
	b=(n/100)%10;
	c=(n/10)%10;
	d=n%10;
	if(a)
		my_printf("%d%d%d%d\n",d,c,b,a);
	else if(b)
			my_printf("%d%d%d\n",d,c,b);
	else if(c)
		my_printf("%d%d\n",d,c);
	else my_printf("%d\n",d);	
}
