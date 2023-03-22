#define NUM_ITER 53595

#include <header.h>


int main_bench()
{
	int n,a[1000],i,c[4]={0},l;
	double t[4];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=1&&a[i]<=18)
			c[0]=c[0]+1;
		else if(a[i]>=19&&a[i]<=35)
			c[1]=c[1]+1;
		else if(a[i]>=36&&a[i]<=60)
			c[2]=c[2]+1;
		else 
			c[3]=c[3]+1;
	}
	l=c[0]+c[1]+c[2]+c[3];
	for(i=0;i<4;i++)
	t[i]=((c[i]*1.0)/l)*100;
	my_printf("1-18: %.2lf%%\n",t[0]);
	my_printf("19-35: %.2lf%%\n",t[1]);
	my_printf("36-60: %.2lf%%\n",t[2]);
	my_printf("60??: %.2lf%%\n",t[3]);
	return 0;
}

