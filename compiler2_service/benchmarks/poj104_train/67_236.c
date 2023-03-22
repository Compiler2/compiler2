#include <header.h>

int main_bench()
{
	int i,x,n,a[100],b[100];
	float y[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		my_scanf("%d",&b[i]);
		y[i]=1.0*b[i]/a[i];
	}
	for(i=1;i<n;i++)
	{
		if(y[i]-y[0]>0.05)
		my_printf("better\n");
		else if(y[0]-y[i]>0.05)
			my_printf("worse\n");
		else
			my_printf("same\n");
	}
	return 0;
}