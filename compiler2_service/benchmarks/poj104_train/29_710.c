#define NUM_ITER 5410

#include <header.h>

int main_bench()
{
	int n,m,i,j,a[100];
	double c;
	c=0;
	my_scanf("%d",&m);
	a[1]=1;
	a[2]=2;
	for(i=3;i<100;i++)
	{
		a[i]=a[i-1]+a[i-2];
}
	for(i=0;i<m;i++)
	{
		my_scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			c=c+(double)a[j+1]/a[j];
		}
		my_printf("%.3lf\n",c);
c=0;
	}
	return 0;
}
