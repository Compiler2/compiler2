#define NUM_ITER 4548

#include <header.h>

int main_bench()
{
	double a1[1000],a2[1000],a3[1000];
	int n;
	int i,j,m;
	my_scanf("%d",&m);
	a1[0]=2;
	a2[0]=1;
	a3[0]=2;
	for(i=1;i<1000;i++)
	{
		a1[i]=a1[i-1]+a2[i-1];
		a2[i]=a1[i-1];
		a3[i]=a1[i]/a2[i];
	}
	for(i=0;i<m;i++)
	{
		my_scanf("%d",&n);
		double sum=0;
		for(j=0;j<n;j++)	sum+=a3[j];
		my_printf("%.3lf\n",sum);
	}
	return 0;
}