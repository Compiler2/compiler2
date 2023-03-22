#include <header.h>

int main_bench()
{
	int a,b,c,d,e;
	long int m,y;
    my_scanf("%ld",&m);
    a=m%10;
    b=(m%100-m%10)/10;
    c=(m%1000-m%100)/100;
    d=(m%10000-m%1000)/1000;
    e=(m%100000-m%10000)/10000;
    if(e!=0)
	{
    	y=a*10000+b*1000+c*100+d*10+e;
		my_printf("%ld",y);
	}
    else
	{
	    if(d!=0)
		{
		y=a*1000+b*100+c*10+d;
		my_printf("%d",y);
		}
	    else
		{
		    if(c!=0)
			{
			y=a*100+b*10+c;
			my_printf("%d",y);
			}
		    else
			{
			    if(b!=0)
				{
				y=a*10+b;
				my_printf("%d",y);
				}
			    else
				{
			    	y=a;
					my_printf("%d",y);
				}
			}
		}
	}
}
