#define NUM_ITER 49451

#include <header.h>

int main_bench()
{
	int n,i,s[4],a;
	double d[4];
	my_scanf("%d",&n);
	s[0]=s[1]=s[2]=s[3]=0;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a);
		if(a>=1&&a<=18)
		{
			s[0]++;
		}
		if(a>=19&&a<=35)
		{
			s[1]++;
		}
		if(a>=36&&a<=60)
		{
			s[2]++;
		}
		if(a>=61)
		{
			s[3]++;
		}
	}
	for(i=0;i<4;i++)
	{ 
		d[i]=(double)s[i]/n*100;
	}
	my_printf("1-18: %.2lf%%\n",d[0]);
	my_printf("19-35: %.2lf%%\n",d[1]);
	my_printf("36-60: %.2lf%%\n",d[2]);
	my_printf("60??: %.2lf%%\n",d[3]);
	return 0;
}