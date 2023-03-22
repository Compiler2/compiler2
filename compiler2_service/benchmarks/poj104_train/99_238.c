#define NUM_ITER 54562

#include <header.h>

int main_bench()
{
	int n,age,a=0,b=0,c=0,d=0;
	my_scanf("%d",&n);
	int i;
	double q,w,e,r;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&age);
		if(age<=18&&age>=1)
		{a++;}
		else if(age>=19&&age<=35)
		{b++;}
		else if(age>=36&&age<=60)
		{c++;}
		else
		{d++;}
	}
	my_printf("1-18: %.2lf%%\n",100.0*a/n);
	my_printf("19-35: %.2lf%%\n",100.0*b/n);
	my_printf("36-60: %.2lf%%\n",100.0*c/n);
	my_printf("60??: %.2lf%%\n",100.0*d/n);

	return 0;
}