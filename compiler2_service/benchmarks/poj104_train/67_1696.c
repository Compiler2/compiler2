#include <header.h>


int main_bench()
{
	int n,a,b,m,p;
	int i;
	double x,y;
	my_scanf("%d",&n);
	my_scanf("%d %d",&a,&b);
	x=(1.0*b)/(1.0*a);
	for(i=1;i<n;i++)
	{
		my_scanf("%d %d",&m,&p);
		y=(1.0*p)/(1.0*m);
		
		if(y-x>0.05)
		{
			my_printf("better\n");
		}
		else if (x-y>0.05)
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
