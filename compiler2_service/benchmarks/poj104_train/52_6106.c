#define NUM_ITER 48065

#include <header.h>

int main_bench()
{
	int n, m;
	int zs[120];
	int i, ex;
	my_scanf("%d", &n);
	my_scanf("%d", &m);
	for(i=0;i<n;i++)
		my_scanf("%d", &(zs[i]));
	int z=(1+n)/2;
	for(i=0;i<z;i++)
	{
		ex=zs[n-1-i];
		zs[n-1-i]=zs[i];
		zs[i]=ex;
	}
	int z1=(1+m)/2;
	for(i=0;i<z1;i++)
	{
		ex=zs[m-1-i];
		zs[m-1-i]=zs[i];
		zs[i]=ex;		
	}
	int z2=m+(1+n-m)/2;
	for(i=m;i<z2;i++)
	{
		ex=zs[n-1-i+m];
		zs[n-1-i+m]=zs[i];
		zs[i]=ex;
	}
	for(i=0;i<n-1;i++)
		my_printf("%d ", zs[i]);
	my_printf("%d\n", zs[n-1]);
	return 0;
}