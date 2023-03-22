#define NUM_ITER 37223

#include <header.h>

int main_bench()
{
    int i,n;
	int bing[100],you[100];
	double c,d;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&bing[i],&you[i]);
	}
	c=100.00*(1.000*you[0]/bing[0]);
	for(i=1;i<n;i++)
	{
		d=100.00*(1.000*you[i]/bing[i]);
		if((d-c)>5.00)
			my_printf("better\n");
		else if((c-d)>5.00)
            my_printf("worse\n");
		else
			my_printf("same\n");
	}

	return 0;
}