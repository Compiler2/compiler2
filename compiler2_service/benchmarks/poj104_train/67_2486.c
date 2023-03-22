#include <header.h>

int main_bench()
{
	int i,n;
	double l[100],a,b,t;
	my_scanf("%d",&n);
	my_scanf("%lf%lf",&a,&b);
	l[0]=b/a;
	for(i=1;i<n;i++)
	{
		my_scanf("%lf%lf",&a,&b);
		l[i]=b/a;
		t=100*(l[i]-l[0]);
		if(t<-5)my_printf("worse\n");
		else if(t<=5)my_printf("same\n");
		else if(t>5)my_printf("better\n");
	}
	my_scanf("%d",&n);
}