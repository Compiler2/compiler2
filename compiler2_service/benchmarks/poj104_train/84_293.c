#include <header.h>

int main_bench()
{
	int n,a,b,c,d,i,r;
	my_scanf("%d",&n);
	my_scanf("%d",&a);
	b=a;
	c=a;
	for(i=2;i<=n;i++)
	{
		my_scanf("%d",&d);
		if(d>b)
		{
			r=b;
			b=d;
			if(r>c)
				c=r;
		}
		else if(d>c)
			c=d;
	}
	my_printf("%d\n%d\n",b,c);
}


