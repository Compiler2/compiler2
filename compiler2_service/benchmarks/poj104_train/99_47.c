#define NUM_ITER 51357

#include <header.h>

int main_bench()
{
	int n,i,b=0,c=0,d=0,e=0,a[100]={0};
	double f,g,h,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	    if(a[i]>=1&&a[i]<=18)b++;
		if(a[i]>=19&&a[i]<=35)c++;
		if(a[i]>=36&&a[i]<=60)d++;
		if(a[i]>=61)e++;
	}
	f=(double)b/n;
	g=(double)c/n;
	h=(double)d/n;
	j=(double)e/n;
    my_printf("1-18: %.2lf",100*f);
	my_printf("%%\n");
	my_printf("19-35: %.2lf",100*g);
	my_printf("%%\n");
	my_printf("36-60: %.2lf",100*h);
	my_printf("%%\n");
	my_printf("60??: %.2lf",100*j);
	my_printf("%%\n");

}