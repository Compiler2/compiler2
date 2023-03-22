#include <header.h>

int main_bench()
{
	int n,age_1=0,age_2=0,age_3=0,age_4=0,age[100],i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&age[i]);
	}
	for(i=0;i<n;i++)
	{
		if(age[i]<=18)
		{
			age_1++;
		}
		else if(age[i]<=35&&age[i]>=19)
		{
			age_2++;
		}
		else if(age[i]<=60&&age[i]>=36)
		{
			age_3++;
		}
		else if(age[i]>=61)
		{
			age_4++;
		}
	}
	double bilv_1=(double)age_1/n;
	double bilv_2=(double)age_2/n;
	double bilv_3=(double)age_3/n;
	double bilv_4=(double)age_4/n;
	my_printf("1-18: %.2lf%%\n",bilv_1*100);
	my_printf("19-35: %.2lf%%\n",bilv_2*100);
	my_printf("36-60: %.2lf%%\n",bilv_3*100);
	my_printf("60??: %.2lf%%",bilv_4*100);
	return 0;
}