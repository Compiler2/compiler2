#define NUM_ITER 49074

#include <header.h>


int main_bench()
{
	int m;
	my_scanf("%d",&m);
	int i,j;
	double sz[999],r[999]={0};
	for(i=1;i<=m;i++)
	{
		my_scanf("%lf",&sz[i]);
	}
	int a1,a2,b1,b2,e1,e2;
	for(i=1;i<=m;i++)
	{
		a1=1;
		a2=2;
		b1=1;
		b2=1;
		for(j=1;j<=sz[i];j++)
		{
			r[i]=r[i]+1.0*a2/b2;
			e1=a2;
			e2=a1+a2;
			a1=e1;
			a2=e2;
			e1=b2;
			e2=b1+b2;
			b1=e1;
			b2=e2;
		}
		my_printf("%.3lf\n",r[i]);
	}
	return 0;
}