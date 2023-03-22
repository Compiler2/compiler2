#define NUM_ITER 34544

#include <header.h>

int main_bench()
{
	int n,i,a[10000],b[10000];
	double s,m,q,c[10000];
	my_scanf("%d",&n);
	my_scanf("%d%d",&a[0],&b[0]);
	s=b[0]*1.0/a[0];
	for(i=1;i<n;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=1;i<n;i++)
	{
		c[i]=b[i]*1.0/a[i];
		m=s-c[i];
		q=c[i]-s;
		if(m>0.05)
			my_printf("worse\n");
		if(q>0.05)
			my_printf("better\n");
		if(m<=0.05&&q<=0.05)
			my_printf("same\n");
	}
	return 0;
}
