#define NUM_ITER 3753

#include <header.h>

int main_bench()
{
	int a[1000], b[1000], d[1000], m, i, j, t;
	float c[1000], sum;
	my_scanf("%d", &m);
	a[1]=1;
	a[2]=2;
	b[1]=2;
	b[2]=3;
	for(j=1;j<=m;j++)
	{
        t=d[j];
		my_scanf("%d", &t);
		sum=0;
		for(i=1;i<=t;i++)
		{
		a[i+2]=a[i+1]+a[i];
	    b[i+2]=b[i+1]+b[i];
		c[i]=(1.0*b[i])/a[i];
		sum=sum+c[i];
		}
		my_printf("%.3f\n", sum);
	}
		
}