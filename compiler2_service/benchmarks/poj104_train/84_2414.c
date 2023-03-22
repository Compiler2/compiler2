#define NUM_ITER 63551

#include <header.h>

int main_bench()
{
	int n,a,e,x=0,y=0,i=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a);
		if(x<y)
		{
			e=y;
			y=x;
			x=e;
		}
		if(a>x)
		{
			y=x;
			x=a;
			
		}
		if(a<x&&a>y)
		{
			y=a;
		}
	}
	my_printf("%d\n",x);
	my_printf("%d\n",y);
	return 0;
}
