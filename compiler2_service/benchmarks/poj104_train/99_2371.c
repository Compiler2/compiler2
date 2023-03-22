#define NUM_ITER 52850

#include <header.h>

int main_bench()
{
	int n;
	int a[100];
	my_scanf("%d\n",&n);
	int b[4]={0};
	int i;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		if(a[i]<=18)
		{b[0]++;}
		else if(a[i]>=19&&a[i]<=35)
		{b[1]++;}
		else if(a[i]>=36&&a[i]<=60)
		{b[2]++;}
		else if(a[i]>=61)
		{b[3]++;}
	}
	double c[4];
	for(i=0;i<4;i++)
	{
		c[i]=(double)b[i]/n;
	}
	my_printf("1-18: %.2lf%%\n",c[0]*100);
    my_printf("19-35: %.2lf%%\n",c[1]*100);
	my_printf("36-60: %.2lf%%\n",c[2]*100);
	my_printf("60??: %.2lf%%\n",c[3]*100);
	return 0;
}