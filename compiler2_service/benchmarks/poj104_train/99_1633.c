#define NUM_ITER 55692

#include <header.h>

int main_bench()
{
	int n, i=0, sum1=0, sum2=0, sum3=0, sum4=0;
	int age[100];
	double per1, per2, per3, per4;
	my_scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d", &age[i]);
		if(age[i]<=18)
		{
			sum1+=1;
		}else
		{
			if(age[i]>=19&&age[i]<=35)
			{
				sum2+=1;
			}else
			{
				if(age[i]>=36&&age[i]<=60)
				{
					sum3+=1;
				}else
				{
					sum4+=1;
				}
			}
		}
	}
	per1=sum1*1.0/n*100;
	per2=sum2*1.0/n*100;
	per3=sum3*1.0/n*100;
	per4=sum4*1.0/n*100;
	my_printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%", per1, per2, per3, per4);
	return 0;
}