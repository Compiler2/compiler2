#include <header.h>

int main_bench()
{
	int a[100],i,d=0,n,e;
	double b,c,s[100];
	my_scanf("%d",&n);
	my_scanf("%lf%lf",&b,&c);
	s[0]=c/b;
	for(i=1;i<n;i++)
	{
		my_scanf("%lf%lf",&b,&c);
		s[i]=c/b;
	}
	for(i=1;i<n;i++)
	{
		if(s[i]-s[0]>=0.05)
		{
			my_printf("better\n");
		}
		if(s[i]-s[0]<=-0.05)
		{
			my_printf("worse\n");
		}
		if(s[i]-s[0]<0.05&&s[i]-s[0]>-0.05)
		{
			my_printf("same\n");
		}
	}
	return 0;
}