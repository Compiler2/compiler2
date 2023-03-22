#define NUM_ITER 49685

#include <header.h>

int main_bench()
{
	int i,n,a=0,b=0,c=0,d=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int nian;
		my_scanf("%d",&nian);
		a+=(nian<=18)? 1:0;
		b+=(nian<=35&&nian>=19)? 1:0;
		c+=(nian<=60&&nian>=36)? 1:0;
		d+=(nian>=61)? 1:0;
	}
	int zong=a+b+c+d;
	my_printf("1-18: %.2lf%%\n",1.0*100*a/zong);
	my_printf("19-35: %.2lf%%\n",1.0*100*b/zong);
	my_printf("36-60: %.2lf%%\n",1.0*100*c/zong);
	my_printf("60??: %.2lf%%\n",1.0*100*d/zong);
	return 0;
}