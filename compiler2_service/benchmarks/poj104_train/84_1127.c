#define NUM_ITER 41091

#include <header.h>

int main_bench()
{
	int a,b,c,n,i;
	float d,e;
	my_scanf("%d",&n);
	my_scanf("%d",&a);
	my_scanf("%d",&b);
	for(i=1;i<=(n-2);i++)
	{
		my_scanf("%d",&c);
		d=(float)(a+b)/2;
		e=(float)(a-b)/2;
		if(c>=a)
		{
			if(c>=b)
			{a=c;
			b=d-e;
			c=d+e;
			}
		else {a=d-e;
			b=d+e;
			c=c;
			}
		}
			else 
			{if(a<=b)
				{a=d-e;
				b=d+e;
				c=c;}
			else {a=d+e;
				b=d-e;
				c=c;
				}
			}	
		if(b>=c)b=b;
		else b=c;
	}
	my_printf("%d\n%d",a,b);
}
