#include <header.h>

int main_bench()
{
	int n,a,b,c,d;
	my_scanf("%d",&n);
	my_scanf("%d",&a);
	my_scanf("%d",&b);
	n=n-2;
	if(b>a)
	{
		c=b;
		b=a;
		a=c;
	}
	do
	{
		n--;
		my_scanf("%d",&d);
		if(d>b)
		{
			c=d;
			d=b;
			b=c;	
		}
		if(b>a)
		{
			c=b;
			b=a;
			a=c;	
		}
	}
	while(n!=0);
	my_printf("%d\n%d",a,b);
	return 0;
}