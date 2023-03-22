#define NUM_ITER 54189

#include <header.h>

int main_bench()
{ 
	int n,brs[103],i;
	double a=0,b=0,c=0,d=0;
    my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&brs[i]);
		if(brs[i]<19)
		{
			a=a+1;
		}
		if(brs[i]>18 && brs[i]<36)
		{
			b=b+1;
		}
		if(brs[i]>35 && brs[i]<61)
		{
			c=c+1;
		}
		if(brs[i]>60)
		{
			d=d+1;
		}
	}
	a=(100.0*a)/n;
	b=(100.0*b)/n;
	c=(100.0*c)/n;
	d=(100.0*d)/n;
    my_printf("1-18: %.2lf",a);
	my_printf("%%\n");
	my_printf("19-35: %.2lf",b);
	my_printf("%%\n");
	my_printf("36-60: %.2lf",c);
	my_printf("%%\n");
	my_printf("60??: %.2lf",d);
	my_printf("%%\n");
	return 0;
}

	