#define NUM_ITER 55033

#include <header.h>

int main_bench()
{
	int n,a[100],i;
	double b[4]={0};
	my_scanf("%d",&n);
	my_printf("\n");
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		if(a[i]<19)b[0]++;
		else if(a[i]<36)b[1]++;
		else if(a[i]<61)b[2]++;
		else b[3]++;
	}
	my_printf("1-18: %.2lf%\n",b[0]/n*100);
	my_printf("19-35: %.2lf%\n",b[1]/n*100);
	my_printf("36-60: %.2lf%\n",b[2]/n*100);
	my_printf("60??: %.2lf%\n",b[3]/n*100);
}
	
