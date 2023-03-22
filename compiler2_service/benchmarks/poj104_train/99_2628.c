#define NUM_ITER 40520

#include <header.h>

int main_bench()
{
	int i,n,s[100];
	double a=0,b=0,c=0,d=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&s[i]);
		if(s[i]>0&&s[i]<19)
			a=a+1;
		if(s[i]>18&&s[i]<36)
			b=b+1;
		if(s[i]>35&&s[i]<61)
			c=c+1;
		if(s[i]>60)
			d=d+1;
	}
	a=(double)100*a/n;
	b=(double)100*b/n;
	c=(double)100*c/n;
	d=(double)100*d/n;
	my_printf("1-18:");
	my_printf("% .2lf",a);
	my_printf("%%\n");
	my_printf("19-35:");
	my_printf("% .2lf",b);
	my_printf("%%\n");
	my_printf("36-60:");
	my_printf("% .2lf",c);
	my_printf("%%\n");
	my_printf("60??:");
	my_printf("% .2lf",d);
	my_printf("%%");
	return 0;
}