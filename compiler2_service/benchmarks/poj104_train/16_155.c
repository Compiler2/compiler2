#include <header.h>

int main_bench()
{
	int i,a,b,c,d,e;
	my_scanf("%d",&i);
	a=i/10000;
	b=(i-a*10000)/1000;
	c=(i-10000*a-1000*b)/100;
	d=(i-10000*a-1000*b-100*c)/10;
    e=i-10000*a-1000*b-100*c-10*d;
	if(a==0&&b==0&&c==0&&d==0)my_printf("%d\n",e);
	else if(a==0&&b==0&&c==0)my_printf("%d%d\n",e,d);
	else if(a==0&&b==0)my_printf("%d%d%d\n",e,d,c);
	else if(a==0)my_printf("%d%d%d%d\n",e,d,c,b);
	else my_printf("%d%d%d%d%d\n",e,d,c,b,a);
}
