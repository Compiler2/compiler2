#define NUM_ITER 55877

#include <header.h>


int main_bench()
{
	int n,i;
	int age[100];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d",&(age[i]));
	}
	int a=0,b=0,c=0,d=0;
	for (i=0;i<n;i++)
	{
		if (age[i]<=18)
		{
			a++ ;
		}
		if (age[i]>=19&&age[i]<=35)
		{
			b ++ ;
		}
		if (age[i]>=36&&age[i]<=60)
		{
			c ++ ;
		}
		if (age[i]>=61)
		{
			d ++ ;
		}
	}
	my_printf("1-18: %.2f%%\n",1.0*a/n*100);
	my_printf("19-35: %.2f%%\n",1.0*b/n*100);
	my_printf("36-60: %.2f%%\n",1.0*c/n*100);
	my_printf("60??: %.2f%%\n",1.0*d/n*100);
	return 0;
}