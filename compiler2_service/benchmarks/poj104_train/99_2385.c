#define NUM_ITER 55766

#include <header.h>


int main_bench()
{
	int i,n,sum[4]={0},temp;


	my_scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&temp);
		if(temp<=18)
			sum[0]++;
		else if (temp<=35)
			sum[1]++;
		else if (temp<=60)
			sum[2]++;
		else  
			sum[3]++;
	}
	
	my_printf("1-18: %.2f%%\n",(float)(100*((float)sum[0]/(float)n)));
	my_printf("19-35: %.2f%%\n",(float)(100*((float)sum[1])/(float)n));
	my_printf("36-60: %.2f%%\n",(float)(100*((float)sum[2]/(float)n)));
	my_printf("60??: %.2f%%\n",(float)(100*((float)sum[3]/(float)n)));
}