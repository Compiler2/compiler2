#define NUM_ITER 20805

#include <header.h>

double a,b,c,d;
double limit = 0.05;
int n;
int main_bench()
{
	my_scanf("%d",&n);
	my_scanf("%lf%lf",&a,&b);
	double t = b / a;

	
	for(int i = 1;i < n;i ++){
		my_scanf("%lf%lf",&c,&d);
		double t1 = d / c;
	
	
		if(t1 - t > limit) my_printf("better\n");
		else if(t - t1 > limit) my_printf("worse\n");
		else my_printf("same\n");
	}
	return 0;
}