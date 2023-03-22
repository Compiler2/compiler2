#define NUM_ITER 52149

#include <header.h>



int main_bench()
{
	int n;
	int nianling[100];
	int n18,sum18=0;
	int n19,sum19=0;
	int n36,sum36=0;
	int n61,sum61=0;
	int i;
	double p18,p19,p36,p61;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&nianling[i]);
		if(nianling[i]<=18)
		{
			sum18+=1;
		}
		if(nianling[i]>=19&&nianling[i]<=35)
		{
			sum19+=1;
		}
		if(nianling[i]>=36&&nianling[i]<=60)
		{
			sum36+=1;
		}
		if(nianling[i]>=61)
		{
			sum61+=1;
		}
	}
	p18=(double)sum18/(double)n*100.0;
	p19=(double)sum19/(double)n*100.0;
	p36=(double)sum36/(double)n*100.0;
	p61=(double)sum61/(double)n*100.0;
	my_printf("1-18: %.2lf%%\n",p18);
	my_printf("19-35: %.2lf%%\n",p19);
    my_printf("36-60: %.2lf%%\n",p36);
    my_printf("60??: %.2lf%%\n",p61);
	return 0;
}

