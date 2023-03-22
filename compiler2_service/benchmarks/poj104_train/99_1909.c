#include <header.h>

int main_bench()
{
	int i,e[100];
	double n,a=0,b=0,c=0,d=0;
	my_scanf("%lf",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&e[i]);
	for(i=0;i<n;i++)
	{
		if (e[i]<=18) a+=1;
		else if (e[i]<=35) b+=1;
		else if (e[i]<=60) c+=1;
		else d+=1;
	}
	a=a/n*100;
	b=b/n*100;
	c=c/n*100;
	d=d/n*100;
	my_printf("1-18: %4.2f",a);
	my_printf("%%\n");
    my_printf("19-35: %4.2f",b);
	my_printf("%%\n");
	my_printf("36-60: %4.2f",c);
	my_printf("%%\n");
	my_printf("60??: %4.2f",d);
	my_printf("%%");
}