#include <header.h>

int main_bench()
{
	int n,i,j,k,b[100],c[100];
	double m,a[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d",&b[i],&c[i]);
		a[i]=(double)c[i]/b[i];
	}
	for(i=1;i<n;i++)
	{
		if(a[i]-a[0]>0.05)
		{
			my_printf("better\n");
		}
		else if(a[0]-a[i]>0.05)
		{
			my_printf("worse\n");
		}
		else
		{
			my_printf("same\n");
		}
	}
	return 0;
}
