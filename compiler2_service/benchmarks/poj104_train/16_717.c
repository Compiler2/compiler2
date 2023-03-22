#include <header.h>

int main_bench()
{
	int z,a,b,c,d,e;
	my_scanf("%d",&z);
	a=(int)z/10000;
	z=z-a*10000;
	b=(int)z/1000;
	z=z-b*1000;
	c=(int)z/100;
	z=z-c*100;
	d=(int)z/10;
	e=z-d*10;
	if(a==0)
		if(b==0)
			if(c==0)
				if(d==0)
					my_printf("%d",e);
				else
					my_printf("%d%d",e,d);
			else
				my_printf("%d%d%d",e,d,c);
		else
			my_printf("%d%d%d%d",e,d,c,b);
	else
		my_printf("%d%d%d%d%d",e,d,c,b,a);
	return 0;
}