#define NUM_ITER 5168

#include <header.h>

int main_bench()
{
	int m,i,j;
	my_scanf("%d",&m);
	int a[1000],c[1000];
	float b[1000],d;
	d=0.0;
	a[0]=1;a[1]=2;
	for(i=3;i<=1000;i++)
	{	a[i-1]=a[i-2]+a[i-3];
	b[i-3]=(1.0*a[i-2])/a[i-3];}

	for(i=1;i<=m;i++)
		my_scanf("%d",&c[i-1]);
	for(i=1;i<=m;i++)
	{    d=0.0;
		for(j=1;j<=c[i-1];j++)
		{;d=d+b[j-1];
		}my_printf("%.3f\n",d);
	}
	return 0;
}