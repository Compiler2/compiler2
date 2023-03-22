#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i=0;
	double a,b,ratecoil;
	my_scanf("%lf %lf",&a,&b);
    ratecoil=b/a;
	double rate;
	for(i=0;i<n-1;i++)
	{
		a=b=rate=0;
		my_scanf("%lf %lf",&a,&b);
		rate=b/a;
		if(rate>ratecoil)
		{
			if((rate-ratecoil)>0.05)
				my_printf("better\n");
			else
				my_printf("same\n");
		}
		if(rate==ratecoil)
			my_printf("same\n");
		if(rate<ratecoil)
		{
			if((ratecoil-rate)>0.05)
				my_printf("worse\n");
		    else
			my_printf("same\n");
		}
	}
	return 0;
}