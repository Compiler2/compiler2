#define NUM_ITER 49440

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
    int a[100];
	int one=0,two=0,three=0,four=0;
	double o,t,e,f;
	int zong;
	int i;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=18)
		{
			one=one+1;
		}
		else if(a[i]>18&&a[i]<36)
		{
			two=two+1;
		}
		else if(a[i]>=36&&a[i]<=60)
		{
			three=three+1;
		}
		else if(a[i]>=61)
        {
			four=four+1;
		}
	}
	zong=one+two+three+four;
    o=100.0*one/zong;
	t=100.0*two/zong;
	e=100.0*three/zong;
    f=100.0*four/zong;
    my_printf("1-18: %.2lf%%\n",o);
    my_printf("19-35: %.2lf%%\n",t);
	my_printf("36-60: %.2lf%%\n",e);
	my_printf("60??: %.2lf%%\n",f);
	return 0;
}