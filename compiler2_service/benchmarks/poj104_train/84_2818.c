#define NUM_ITER 60484

#include <header.h>

int main_bench()
{
	int n,a,b,c,i,t;
	my_scanf("%d",&n);
	my_scanf("%d%d",&a,&b);
	if(a<b)
	{
		t=b;
		b=a;
		a=t;
	}
	for(i=3;i<=n;i++)
	{
		my_scanf("%d",&c);
		if(c>a)
		{
			b=a;
			a=c;
		}
		else
		{
			if(c>b)
			{
				b=c;
			}
		}
	}
	my_printf("%d\n%d",a,b);
}

