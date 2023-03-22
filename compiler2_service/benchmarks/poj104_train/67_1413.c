#define NUM_ITER 18574

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);

	double a1,b1,c1;
	my_scanf("%lf %lf",&a1,&b1);
	c1=(b1/a1)*(double)100;

	int i;
	double a2[100],b2[100],c2[100];
	for(i=0;i<n-1;i++)
	{
		my_scanf("%lf %lf",&a2[i],&b2[i]);
		c2[i]=(b2[i]/a2[i])*(double)100;
		if(c2[i]-c1>5) my_printf("better\n");
		if(c1-c2[i]>5) my_printf("worse\n");
		if(c2[i]-c1<=5&&c1-c2[i]<=5) my_printf("same\n");
	}

    return 0;
}

