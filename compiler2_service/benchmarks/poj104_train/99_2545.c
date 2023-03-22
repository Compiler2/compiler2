#define NUM_ITER 54483

#include <header.h>

int main_bench()
{
	int age[101],i,n,sum1=0,sum2=0,sum3=0,sum4=0;
	double p1,p2,p3,p4;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&age[i]);
	}
	for(i=0;i<n;i++)
	{
		if(age[i]>=1&&age[i]<=18)
		{
			sum1++;
		}
		if(age[i]>18&&age[i]<=35)
		{
			sum2++;
		}
		if(age[i]>35&&age[i]<=60)
		{
			sum3++;
		}
		if(age[i]>60)
		{
			sum4++;
		}
	}
	p1=100*(float)sum1/(float)n;
	p2=100*(float)sum2/(float)n;
	p3=100*(float)sum3/(float)n;
	p4=100*(float)sum4/(float)n;
	my_printf("1-18: %.2f%%\n",p1);
	my_printf("19-35: %.2f%%\n",p2);
	my_printf("36-60: %.2f%%\n",p3);
	my_printf("60??: %.2f%%",p4);
	return 0;
}