#define NUM_ITER 54223

#include <header.h>

int main_bench()
{
	
	int n,i,a,suma=0,sumb=0,sumc=0,sumd=0,sum=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a);
		if(a<=18)
		{
         suma++;
		}
		else if(a>=19&&a<=35)
		{
			sumb++;
		}
		else if(a>=36&&a<=60)
		{
			sumc++;
		}
		else if(a>60)
		{
			sumd++;
		}
		sum++;
	}
	
	my_printf("1-18: %.2lf%%\n",100.0*suma/sum);
	my_printf("19-35: %.2lf%%\n",100.0*sumb/sum);
	my_printf("36-60: %.2lf%%\n",100.0*sumc/sum);
	my_printf("60??: %.2lf%%",100.0*sumd/sum);
return 0;
}
