#define NUM_ITER 34750

#include <header.h>

int main_bench()
{
	int n,i;
	int a[100],b[100];
	double x;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
	my_scanf("%d%d",&a[i],&b[i]);
}
x=1.0*b[0]/a[0];
for(i=1;i<n;i++)
{
	if(x>1.0*b[i]/a[i]&&(x-1.0*b[i]/a[i]>0.05))
	{
		my_printf("worse\n");
	}
	else if(x<1.0*b[i]/a[i]&&(1.0*b[i]/a[i]-x>0.05))
	{
		my_printf("better\n");
	}
	else
	{
		my_printf("same\n");
	}
}
return 0;
}