#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int nianling[100];
	int i;
	int sum[4]={0};
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&nianling[i]);
		if(nianling[i]>=1&&nianling[i]<=18)
			sum[0]++;
		if(nianling[i]>=19&&nianling[i]<=35)
			sum[1]++;
    	if(nianling[i]>=36&&nianling[i]<=60)
			sum[2]++;
    	if(nianling[i]>=61)
			sum[3]++;
	}
	int j;
	double bai[4];
	for(j=0;j<4;j++)
	{
		bai[j]=((double)sum[j]/(double)n)*100;
	}
	my_printf("1-18: %.2lf%%\n",bai[0]);
	my_printf("19-35: %.2lf%%\n",bai[1]);
	my_printf("36-60: %.2lf%%\n",bai[2]);
	my_printf("60??: %.2lf%%",bai[3]);
	return 0;
}


	
