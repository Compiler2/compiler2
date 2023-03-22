#define NUM_ITER 54775

#include <header.h>

int main_bench()
{
	int n,i,b,c,d,e;
	int a[100];
	double w,x,y,z;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	b=0;
	c=0;
	d=0;
	e=0;
    for(i=0;i<n;i++)
	{
		if(a[i]<=18)b=b+1;
		else if(a[i]<36&a[i]>18)c=c+1;
		else if(a[i]<61&a[i]>35)d=d+1;
		else e=e+1;
	}
	w=(double)b*100/n;
	x=(double)c*100/n;
	y=(double)d*100/n;
	z=(double)e*100/n;
	my_printf("1-18: %.2lf%%\n",w);
	my_printf("19-35: %.2lf%%\n",x);
	my_printf("36-60: %.2lf%%\n",y);
	my_printf("60??: %.2lf%%",z);
}