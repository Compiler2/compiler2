#include <header.h>

int main_bench()
{
	int n,a,b,c,d;
	my_scanf("%d",&n);
    a=n%10;
	b=n/10%10;
	c=n/100%10;
	d=n/1000%10;
	if(n>=10)
	{
		if(n/10>=10)
		{
			if(n/100>=10)
			{
				if(n/1000<10)
			    my_printf("%d%d%d%d\n",a,b,c,d);
			}
		    else
	        my_printf("%d%d%d\n",a,b,c);
		}
	    else
	    my_printf("%d%d\n",a,b);
	}
	else
	my_printf("%d\n",n);
}