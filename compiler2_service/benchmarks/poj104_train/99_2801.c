#define NUM_ITER 55046

#include <header.h>

int main_bench()
{
	int n,i,a[100];
	double b=0,c=0,d=0,f=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=18)
			b++;
		else if((a[i]<=35)&&(a[i]>=19))
			c++;
		else if((a[i]<=60)&&(a[i]>=36))
			d++;
		else
			f++;
	}
	my_printf("1-18: %.2lf%%\n",b/(b+c+d+f)*100.0);
	my_printf("19-35: %.2lf%%\n",c/(b+c+d+f)*100.0);
	my_printf("36-60: %.2lf%%\n",d/(b+c+d+f)*100.0);
	my_printf("60??: %.2lf%%\n",f/(b+c+d+f)*100.0);
	return 0;

}