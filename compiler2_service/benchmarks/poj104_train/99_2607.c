#define NUM_ITER 43180

#include <header.h>


int main_bench()
{
	int i,n,a[100];
	double b1=0,b2=0,b3=0,b4=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>0&&a[i]<=18)
			b1++;
		else if(a[i]>=19&&a[i]<=35)
			b2++;
		else if(a[i]>=36&&a[i]<=60)
			b3++;
		else
			b4++;
	}
	my_printf("1-18: %.2lf%%\n",100*b1/n);
	my_printf("19-35: %.2lf%%\n",100*b2/n);
	my_printf("36-60: %.2lf%%\n",100*b3/n);
	my_printf("60??: %.2lf%%\n",100*b4/n);
	return 0;
}



