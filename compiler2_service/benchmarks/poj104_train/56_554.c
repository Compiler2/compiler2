#define NUM_ITER 1613779

#include <header.h>

int main_bench()
{
	int x;
	int a;
	int b;
	int c;
	int d;
	int e;
	my_scanf("%d",&x);
	a=x/10000;
	b=(x-10000*a)/1000;
	c=(x-10000*a-1000*b)/100;
	d=(x-10000*a-1000*b-100*c)/10;
	e=x%10;
	{
		if(a==0&&b!=0&&c!=0&&d!=0&&e!=0)
			my_printf("%d%d%d%d",e,d,c,b);
		else
			if(a==0&&b==0&&c!=0&&d!=0&&e!=0)
				my_printf("%d%d%d",e,d,c);
			else
				if(a==0&&b==0&&c==0&&d!=0&&e!=0)
					my_printf("%d%d",e,d);
				else
					if(a==0&&b==0&&c==0&&d==0&&e!=0)
						my_printf("%d",e);
					else
						if(a!=0&&b!=0&&c!=0&&d!=0&&e!=0)
							my_printf("%d%d%d%d%d",e,d,c,b,a);
						else
							my_printf("I don't know!");
	}
	return 0;
}