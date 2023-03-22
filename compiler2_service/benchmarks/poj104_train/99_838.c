#include <header.h>

int main_bench()
{
	int a[1000],n,i,q,w,e,r;
	double z,x,c,v;
	my_scanf("%d\n",&n);
	q=0;
	w=0;
	e=0;
	r=0;
    for(i=0;i<n;i++)
	{   my_scanf("%d",&a[i]);
		if(a[i]<=18)
		{q++;}
		if(18<a[i] && a[i]<36)
		{w++;}
		if(35<a[i] && a[i]<61)
		{e++;}
		if(a[i]>60)
		{r++;}
	}
	z=100.00*q/n;
	x=100.00*w/n;
	c=100.00*e/n;
	v=100.00*r/n;
	my_printf("1-18: ");
	my_printf("%.2lf",z);
	my_printf("%%\n");
	my_printf("19-35: ");
	my_printf("%.2lf",x);
	my_printf("%%\n");
	my_printf("36-60: ");
	my_printf("%.2lf",c);
	my_printf("%%\n");
	my_printf("60??: ");
	my_printf("%.2lf",v);
	my_printf("%%\n");
return 0;
}