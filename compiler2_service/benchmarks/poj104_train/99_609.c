#define NUM_ITER 55680

#include <header.h>

int main_bench()
{
	int n,i,p[100],a[4]={0,0,0,0};
	double b[4];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&p[i]);
		if(p[i]<=18)a[0]++;
		else if(p[i]<=35)a[1]++;
		else if(p[i]<=60)a[2]++;
		else a[3]++;
	}
	for(i=0;i<4;i++)
	{
		b[i]=(double)a[i]/n;
		b[i]*=100.0;
	}
	my_printf("1-18: %.2f%%\n",b[0]);
	my_printf("19-35: %.2f%%\n",b[1]);
	my_printf("36-60: %.2f%%\n",b[2]);
	my_printf("60??: %.2f%%\n",b[3]);
	return 0;
}