#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,s,g,i,h;
    my_scanf("%d",&a);
    if(a>10000)
	{
        b=a/10000;
		c=a%10000;
		d=c/1000;
		e=c%1000;
		f=e/100;
		g=e%100;
		s=g/10;
        h=g%10;
        i=h*10000+s*1000+f*100+d*10+b;
			my_printf("%d",i);
	}
    else if(a>1000)
	{
		b=a/1000;
	    c=a%1000;
     	d=c/100;
    	e=c%100;
    	f=e/10;
	    g=e%10;
		i=g*1000+f*100+d*10+b;
			my_printf("%d",i);
	}
	else if(a>100)
	{
	b=a/1000;
	    c=a%1000;
     	d=c/100;
    	e=c%100;
    	f=e/10;
	    g=e%10;
		i=g*100+f*10+d;
			my_printf("%d",i);
	}
	else if(a>10)
	{
	b=a/1000;
	    c=a%1000;
     	d=c/100;
    	e=c%100;
    	f=e/10;
	    g=e%10;
		i=g*10+f;
			my_printf("%d",i);
	}
	return 0;
}
