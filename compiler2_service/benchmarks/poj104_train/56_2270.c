#include <header.h>


int main_bench()
{
    int n,a,b,c,d,e;
	my_scanf("%d",&n);
	a=n/10000;
	b=(n%10000)/1000;
	c=(n%1000)/100;
	d=(n%100)/10;
	e=n%10;
    if (a==0)
	{
	    if(b==0)
		{
			if(c==0)
			{
			    if(d==0)
                    my_printf("%d",e);
				else
					my_printf("%d",e*10+d);
			}
			else
				my_printf("%d",e*100+d*10+c);
		}
		else
			my_printf("%d",e*1000+d*100+c*10+b);
	}
	else
        my_printf("%d",e*10000+d*1000+c*100+b*10+a);

	return 0;
}