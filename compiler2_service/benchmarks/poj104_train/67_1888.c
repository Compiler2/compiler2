#include <header.h>

int main_bench()
{
	int n,e,a;
	double p,x;
	my_scanf("%d",&n);
	my_scanf("%d %d",&a,&e);
	p=1.0*e/a;
	for(int i=1;i<=n-1;i++)
	{
	my_scanf("%d %d",&a,&e);
	x=1.0*e/a;
	if((x-p)*(x-p)<=0.0025)my_printf("same\n");
	if((x-p)>0.05)my_printf("better\n");
	if((x-p)<-0.05)my_printf("worse\n");
	}
	return 0;
}
