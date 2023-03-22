#define NUM_ITER 56513

#include <header.h>


int main_bench()
{
	int n;
	int i;
	int nl[99];
	int n18=0;
	int n35=0;
	int n60=0;
	int n61=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&nl[i]);
		if(nl[i]<=18)
		{
			n18++;
			continue;
		}
		if(nl[i]<=35)
		{
			n35++;
			continue;
		}
		if(nl[i]<=60)
		{
			n60++;
			continue;
		}
		if(nl[i]>=61)
		{
			n61++;
			continue;
		}
	}
	double a=100.0*n18/n;
	double b=100.0*n35/n;
	double c=100.0*n60/n;
	double d=100.0*n61/n;
	my_printf("1-18: %.2lf%%\n",a);
	my_printf("19-35: %.2lf%%\n",b);
	my_printf("36-60: %.2lf%%\n",c);
	my_printf("60??: %.2lf%%\n",d);
	return 0;
}