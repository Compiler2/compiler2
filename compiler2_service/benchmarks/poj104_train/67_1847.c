#include <header.h>

int main_bench()
{
	int n;
	double z[1000],y[1000],a,p;
	my_scanf("%d",&n);
    for(int i=1;i<=n;i++)
	{
		my_scanf("%lf %lf",&z[i],&y[i]);
	}
    a=y[1]/z[1];
	for(int b=2;b<=n;b++)
	{
		p=y[b]/z[b];
		if(p-a>0.05)
		{
		    my_printf("better\n");
		}
        else if(a-p>0.05)
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