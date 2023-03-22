#include <header.h>


int main_bench()
{
	int x,a,b,c,d,e;
	my_scanf("%d",&x);
    a=x/10000;
	b=(x-a*10000)/1000;
	c=(x-a*10000-b*1000)/100;
	d=(x-a*10000-b*1000-c*100)/10;
	e=x-a*10000-b*1000-c*100-d*10;
	if(a==0)
		if(b==0)
			if(c==0)
				my_printf("%d%d\n",e,d);
			else
				my_printf("%d%d%d\n",e,d,c);
		else
			my_printf("%d%d%d%d\n",e,d,c,b);
	else
		my_printf("%d%d%d%d%d\n",e,d,c,b,a);
}