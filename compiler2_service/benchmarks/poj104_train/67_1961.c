#include <header.h>

int main_bench()
{
	int t,i;
	double m,n,sz1[100]={0},sz2[100]={0};
	double x,y;
	my_scanf("%d",&t);
	my_scanf("%lf %lf",&m,&n);
	x=1.0*n/m;
	
	for(i=1;i<t;i++)
	{
		my_scanf("%lf %lf",&sz1[i],&sz2[i]);
	}
	for(i=1;i<t;i++)
	{
		y=1.0*sz2[i]/sz1[i];
		if(y-x>0.05)
		{
			my_printf("better\n",y ,x);
		}
		if(x-y>0.05)
		{
			my_printf("worse\n");
		}
		if(x-y<=0.05&&y-x<=0.05)
		{
			my_printf("same\n");
		}
	}
	return 0;
}
