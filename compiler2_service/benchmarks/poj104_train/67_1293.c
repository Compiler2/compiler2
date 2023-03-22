#define NUM_ITER 24466

#include <header.h>


int main_bench()
{
	int i,n;
	double a[100];
	double g,f,x;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%lf %lf",&g,&f);
		a[i]=f/g;
		x=a[0];
	}
	for(i=1;i<n;i++)
	{
		if((a[i]-x)>0.05)
		{
				my_printf("better\n");
		}
		if((x-a[i])>0.05)
		{
                my_printf("worse\n");
		}
		else if((a[i]-x<=0.05)&&(x-a[i]<=0.05))
		{
				my_printf("same\n");
		}
	}
	return 0;
}