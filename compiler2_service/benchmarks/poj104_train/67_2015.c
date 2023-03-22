#include <header.h>

int main_bench()
{
	int cases;
	double x,y,rate;
	my_scanf("%d",&cases);
	cases--;
	my_scanf("%lf %lf",&x,&y);
	rate=y/x;
	while(cases--){
		my_scanf("%lf %lf",&x,&y);
		if(y/x-rate>0.05)my_printf("better\n");
		else if(rate-y/x>0.05)my_printf("worse\n");
		else my_printf("same\n");
	}
}