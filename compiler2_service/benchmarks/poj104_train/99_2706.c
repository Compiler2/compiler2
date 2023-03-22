#define NUM_ITER 39840

#include <header.h>

int main_bench()
{
	int n,i,b=0,c=0,d=0,e=0;
	double p,q,r,s;
	int a[1000];
	my_scanf("%d\n",&n);
	my_printf("\n");
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=18)
			b++;
	}
	for(i=0;i<n;i++)
	{
		if(19<=a[i]&&a[i]<=35)
			c++;
	}
	for(i=0;i<n;i++)
	{
		if(36<=a[i]&&a[i]<=60)
			d++;
	}
	for(i=0;i<n;i++)
	{
		if(61<=a[i])
			e++;
	}
    p=(b*1.0/n)*100;
	q=(c*1.0/n)*100;
	r=(d*1.0/n)*100;
	s=(e*1.0/n)*100;
	my_printf("1-18: %.2lf%%\n",p);
	my_printf("19-35: %.2lf%%\n",q);
	my_printf("36-60: %.2lf%%\n",r);
	my_printf("60??: %.2lf%%\n",s);
}