#define NUM_ITER 5384

#include <header.h>


int main_bench()
{
	float a[100],b[100];
	a[0]=2;a[1]=3;
	b[0]=1;b[1]=2;
	for(int i=2;i<100;i++)
	{
		a[i]=a[i-1]+a[i-2];
		b[i]=b[i-1]+b[i-2];
	}
	int n;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int m;
		my_scanf("%d",&m);
		float sum=0;
		for(int j=0;j<m;j++)
		{
			sum+=a[j]/b[j];
		}
		my_printf("%.3f\n",sum);
	}
	return 0;
}