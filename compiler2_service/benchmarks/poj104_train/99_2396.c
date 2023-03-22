#define NUM_ITER 48203

#include <header.h>

int main_bench()
{
	int n,i;
	double a,q=0,w=0,e=0,r=0;
	my_scanf("%d",&n);
	double z,x,c,v;
	for(i=1;i<=n;i++)
	{
		
		my_scanf("%lf",&a);
		if(a>=1&&a<=18)
		{q++;}
		else if(a>=19&&a<=35)
		{w++;}
		else if(a>=36&&a<=60)
		{e++;}
		else
		{r++;}
      }
	z=(q/n)*100;
	x=(w/n)*100;
	c=(e/n)*100;
	v=(r/n)*100;
	my_printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",z,x,c,v);
	return 0;
}

