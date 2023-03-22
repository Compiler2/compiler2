#define NUM_ITER 51268

#include <header.h>

int main_bench()
{
	int n,a,b,c,d;
	my_scanf("%d",&n);
	int z[200000];
	for(a=1;a<=n;a++)
	{
		my_scanf("%d",&z[a]);
	}
	my_scanf("%d",&b);
	d=0;
	a=n;
	while(z[a]==b)
	{
		a-=1;
	}
	n=a;
	for(a=1;a<=n;a++)
	{
		if (z[a]!=b)
		{
			if(a<n)
		my_printf("%d ",z[a]);
			else
	my_printf("%d",z[a]);
		}
	}
	return 0;
} 