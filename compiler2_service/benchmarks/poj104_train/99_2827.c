#define NUM_ITER 54466

#include <header.h>

int main_bench()
{
	int n,i,x,a,b,c,d;
	a=0;
	b=0;
	c=0;
	d=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&x);
		if((x>=1)&&(x<=18))
		{
			a++;
		}
		else if(x<=35)
		{
			b++;
		}
		else if(x<=60)
		{
			c++;
		}
		else 
		{
			d++;
		}
	}
	my_printf("1-18: %.2lf%%\n",100.0*a/n);
	my_printf("19-35: %.2lf%%\n",100.0*b/n);
	my_printf("36-60: %.2lf%%\n",100.0*c/n);
	my_printf("60??: %.2lf%%\n",100.0*d/n);
	return 0;
}