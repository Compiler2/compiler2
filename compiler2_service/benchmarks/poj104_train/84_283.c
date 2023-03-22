#define NUM_ITER 60770

#include <header.h>

int main_bench()
{
	int a,b,c,m,n,i;
	my_scanf("%d",&n);
	i=3;
	my_scanf("%d",&a);
	my_scanf("%d",&b);
	if(a<b)
	{	m=a;
		a=b;
		b=m;
	}
	while(i<=n)
	{
		my_scanf("%d",&c);
		if(c>b)
		{
			m=b;
			b=c;
			c=m;
		}
		if(b>a)
		{
			m=a;
			a=b;
			b=m;
		}
		i=i+1;
	}
	my_printf("%d\n%d",a,b);
}

