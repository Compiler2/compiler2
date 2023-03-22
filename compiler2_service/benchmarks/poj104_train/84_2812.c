#include <header.h>


int main_bench()
{
	int a,b,c,n,i,e;
	my_scanf("%d",&n);
	my_scanf("%d",&b);
	my_scanf("%d",&c);
	if(b>c)
	{
		e=b;
		b=c;
		c=e;
	}

	for(i=3;i<=n;i++)
	{
		my_scanf("%d",&a);

		if(a>c)
		{
			e=c;
			c=a;
			b=e;
		}
		else if((a>b)&&(a<=c))
		{
			b=a;
		}
		else
		{
			continue;
		}

	}

	my_printf("%d\n%d\n",c,b);
	return 0;
}