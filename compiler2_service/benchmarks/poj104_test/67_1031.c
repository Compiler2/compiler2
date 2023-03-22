#include <header.h>

int main_bench()
{
	int i;
	double j,k,l,n,a[1000],b[1000];
	my_scanf("%lf",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%lf %lf",&j,&k);
		b[i]=k/j;
	}
	for(i=1;i<=n-1;i++)
	{
		if(b[i]-b[0]>0.05)
			my_printf("better\n");
		if(b[i]-b[0]<-0.05)
			my_printf("worse\n");
		if(b[i]-b[0]<=0.05&&b[i]-b[0]>=-0.05)
			my_printf("same\n");
	}
	return 0;
}