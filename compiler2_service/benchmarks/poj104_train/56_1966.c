#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,g;
		my_scanf("%d",&a);
	b=a/10000;
	c=a/1000-b*10;
	d=a/100-b*100-c*10;
	e=a/10-b*1000-c*100-d*10;
	f=a-b*10000-c*1000-d*100-e*10;
	if(b!=0)
		my_printf("%d%d%d%d%d",f,e,d,c,b);
	else if(c!=0)
		my_printf("%d%d%d%d",f,e,d,c);
	else if(d!=0)
	{
		g=100*f+10*e+d;
		my_printf("%d",g);
	}
	else if(e!=0)
		my_printf("%d%d",f,e);
	else if(f!=0)
		my_printf("%d",f);
}