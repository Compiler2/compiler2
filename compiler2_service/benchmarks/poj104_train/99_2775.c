#define NUM_ITER 55097

#include <header.h>


int main_bench()
{
	int a[100],i,n;
	int b=0,c=0,d=0,e=0;
	double f,g,h,j;

	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=18)
		
			b++;
		
		if(a[i]>=19&&a[i]<=35)
			c++;
		if(a[i]>=36&&a[i]<=60)
			d++;
		if(a[i]>=61)
			e++;
	}
	f=(double)b/n*100;
	g=(double)c/n*100;
	h=(double)d/n*100;
	j=(double)e/n*100;
	my_printf("1-18: %.2lf%",f);
	my_printf("%%\n");
	my_printf("19-35: %.2lf%",g);
		my_printf("%%\n");
	my_printf("36-60: %.2lf%",h);
		my_printf("%%\n");
	my_printf("60??: %.2lf%",j);
		my_printf("%%\n");
	
	return 0;
}

