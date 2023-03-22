#define NUM_ITER 54626

#include <header.h>

int main_bench()
{
	int n,u[100];
	my_scanf("%d\n",&n);
	int i;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&u[i]);
	}
    double s1=0.0,s2=0.0,s3=0.0,s4=0.0;
	int sum1=0,sum2=0,sum3=0,sum4=0;
	for(i=0;i<n;i++)
	{
		if(u[i]<19)
		{sum1++;}
		else if(u[i]>18&&u[i]<36)
		{sum2++;}
		else if(u[i]>35&&u[i]<61)
		{sum3++;}
		else if(u[i]>60)
		{sum4++;}
	}
	s1=(double)100*sum1/n;
	s2=(double)100*sum2/n;
	s3=(double)100*sum3/n;
	s4=(double)100*sum4/n;
	my_printf("1-18: %.2lf%%\n",s1);
	my_printf("19-35: %.2lf%%\n",s2);
	my_printf("36-60: %.2lf%%\n",s3);
	my_printf("60??: %.2lf%%",s4);
	return 0;
}