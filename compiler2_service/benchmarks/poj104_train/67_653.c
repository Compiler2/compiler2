#define NUM_ITER 36182

#include <header.h>

int main_bench()
{
	int num[100],ynum[100];
	int n;
	int i;
	double a[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&num[i],&ynum[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]=(double)ynum[i]/num[i]*100;
	}
	for(i=1;i<n;i++)
	{
		if(a[i]-a[0]>5) my_printf("better\n");
		else if(a[0]-a[i]>5) my_printf("worse\n");
		else my_printf("same\n");
	}
	return 0;
}