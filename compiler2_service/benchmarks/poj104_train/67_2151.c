#include <header.h>

int main_bench()
{
	int n,i;
	double std,a,b,x,y;
	double sz[100];
	my_scanf("%d",&n);
	my_scanf("%lf%lf",&a,&b);
	std=b/a;
	for(i=1;i<n;i++)
	{
		my_scanf("%lf%lf",&x,&y);
		if(((y/x)-std)>0.05)
		{
			sz[i]=1;
		}
		else if((std-(y/x))>0.05)
		{
			sz[i]=0;
		}
		else
		{
			sz[i]=2;
		}
	}
	for(i=1;i<n;i++)
	{
		if(sz[i]==1)
		{
			my_printf("better\n");
		}
		else if(sz[i]==0)
		{
			my_printf("worse\n");
		}
		else if(sz[i]==2)
		{
			my_printf("same\n");
		}
	}
	return 0;
}