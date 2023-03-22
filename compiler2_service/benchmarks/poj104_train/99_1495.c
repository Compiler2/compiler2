#include <header.h>

int main_bench()
{
	int n,i,a[100],sum1=0,sum2=0,sum3=0,sum4=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	
			if(a[i]<=18)
			sum1+=1;
		else if(a[i]<=35)
		sum2+=1;
		else if(a[i]<=60)
			sum3+=1;
		else
			sum4+=1;
	}
	my_printf("1-18: %.2f%%\n",(float)sum1/n*100);
	my_printf("19-35: %.2f%%\n",(float)sum2/n*100);
	my_printf("36-60: %.2f%%\n",(float)sum3/n*100);
	my_printf("60??: %.2f%%\n",(float)sum4/n*100);
	return 0;
}
