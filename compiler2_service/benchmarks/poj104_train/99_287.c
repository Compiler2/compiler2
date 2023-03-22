#define NUM_ITER 1078754

#include <header.h>

int year[100];
double n,a,b,c,d;
int main_bench()
{
	int i;
	my_scanf("%lf",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&year[i]);
		if(year[i]>=1&&year[i]<=18)
			a++;
		if(year[i]<=35&&year[i]>=19)
			b++;
		if(year[i]>=36&&year[i]<=60)
			c++;
		if(year[i]>60)
			d++;
	}
	a=(double)a/n*100;
	b=(double)b/n*100;
	c=(double)c/n*100;
	d=(double)d/n*100;
	my_printf("1-18: %.2lf%%\n",a);
	my_printf("19-35: %.2lf%%\n",b);
	my_printf("36-60: %.2lf%%\n",c);
	my_printf("60??: %.2lf%%",d);
	return 0;
}