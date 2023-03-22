#include <header.h>


int main_bench()
{
	int i;
	double b, c, d, e, a[100], sum=0, sum1=0, sum2=0, sum3=0, n;
	my_scanf("%lf", &n);
	for(i=0;i<n;i++)
	{
		my_scanf("%lf", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=0&&a[i]<=18)
		{
			sum=sum+1.0;
		}
		else if(a[i]>=19&&a[i]<=35)
		{
			sum1=sum1+1.0;
		}
		else if(a[i]>=36&&a[i]<=60)
		{
			sum2=sum2+1.0;
		}
		else if(a[i]>=61)
		{
			sum3=sum3+1.0;
		}
	}
	b=(sum/n)*100.0;
	c=(sum1/n)*100.0;
	d=(sum2/n)*100.0;
	e=(sum3/n)*100.0;
	my_printf("1-18: %.2lf%%\n", b);
	my_printf("19-35: %.2lf%%\n", c);
	my_printf("36-60: %.2lf%%\n", d);
	my_printf("60??: %.2lf%%\n", e);
	
	
	return 0;
}

