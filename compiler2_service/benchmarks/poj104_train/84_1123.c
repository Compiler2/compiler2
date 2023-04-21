#define NUM_ITER 60186

#include <header.h>

int main_bench()
{
	int n,b,c,i=1;
	my_scanf("%d",&n);
	b=0;
	c=0;
	do
	{
		int a;
		my_scanf("%d",&a);
		if(a>b)
		{
			c=b;
			b=a;
		}
		else
			if(a>c)
			{
				c=a;
				b=b;
			}
			else
			{
				c=c;
				b=b;
			}
		i=i+1;
	}
	while(i<=n);
	my_printf("%d\n%d",b,c);
}

