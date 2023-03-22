#define NUM_ITER 64647

#include <header.h>

int main_bench()
{
	int n,a,b,c,max,smax,i,r,t;
	my_scanf("%d",&n);
	my_scanf("%d",&a);
	my_scanf("%d",&b);
	if(a<b)
	{
		t=b;
        b=a;
		a=t;
	}
	max=a;
	smax=b;
	for(i=1;i<=n-2;i++)
	{
		my_scanf("%d",&c);
		if(c>max)
		{
			r=max;
			max=c;
			smax=r;
		}
		else if(c>smax)
		{
		    smax=c;
		}
	}
	my_printf("%d\n",max);
	my_printf("%d\n",smax);
}

