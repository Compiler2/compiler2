#define NUM_ITER 1468952

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int a,b,c,d,e,f;
	a=n/100;
	if(a!=0)
	{
		my_printf("%d\n",a);
		a=n%100;
	}
	else
	{
		a=0;
		my_printf("%d\n",a);
		a=n;
	}
		if(a<50)
		{
			b=0;
			my_printf("%d\n",b);
			b=a;
		}
		else
		{
			b=a/50;
			my_printf("%d\n",b);
			b=a%50;
		}
		if(b<20)
		{
			c=0;
			my_printf("%d\n",c);
			c=b;
		}
		else
		{
			c=b/20;
			my_printf("%d\n",c);
			c=b%20;
		}
		if(c<10)
		{
			d=0;
			my_printf("%d\n",d);
			d=c;
		}
		else
		{
			d=c/10;
			my_printf("%d\n",d);
			d=c%10;
		}
			if(d<5)
		{
			e=0;
			my_printf("%d\n",e);
			e=d;
		}
		else
		{
			e=d/5;
			my_printf("%d\n",e);
			e=d%5;
		}
			if(e==0)
		{
			f=0;
			my_printf("%d\n",f);
		}
		else
		{
			f=e;
			my_printf("%d\n",f);
		}
		return 0;
}





