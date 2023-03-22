#include <header.h>

int main_bench()
{
	int i,n;
    double e=0,b=0,c=0,d=0,l,m,x,o;
	int a[101];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
    for(i=0;i<n;i++)
	{
		if(a[i]>=1&&a[i]<=18) e++;
        if(a[i]>=19&&a[i]<=35) b++;
        if(a[i]>=36&&a[i]<=60) c++;
        if(a[i]>60) d++;
	}
    l=100*(e+0.0)/n;
    m=100*(b+0.0)/n;
    x=100*(c+0.0)/n;
    o=100*(d+0.0)/n;
	my_printf("1-18: ");my_printf("%.2lf",l);my_printf("%%\n");
    my_printf("19-35: ");my_printf("%.2lf",m);my_printf("%%\n");
    my_printf("36-60: ");my_printf("%.2lf",x);my_printf("%%\n");
    my_printf("60??: ");my_printf("%.2lf",o);my_printf("%%");
}