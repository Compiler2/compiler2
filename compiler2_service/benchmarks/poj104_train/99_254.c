#define NUM_ITER 57405

#include <header.h>

int main_bench()
{
	int n,a[1000],i;
	double d=0,e=0,f=0,g=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		if(a[i]<=18)
		{
			d+=1;
		}
		else if(a[i]<=35)
		{
			e+=1;
		}
		else if(a[i]<=60)
		{
			f+=1;
		}else
		{
			g+=1;
		}
	}
	my_printf("1-18: %.2lf%%\n",d*100/n);
	my_printf("19-35: %.2lf%%\n",e*100/n);
	my_printf("36-60: %.2lf%%\n",f*100/n);
	my_printf("60??: %.2lf%%\n",g*100/n);
	return 0;
}
