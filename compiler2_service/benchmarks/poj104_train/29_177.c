#define NUM_ITER 5576

#include <header.h>

int main_bench()
{
	int n,i,j,k,p;
	double a[100],fenzi[100],fenmu[100],sum[100]={0.0};
	fenzi[0]=2.0;
	fenzi[1]=3.0;
	fenmu[0]=1.0;
	fenmu[1]=2.0;
	a[0]=2.0;
	a[1]=1.5;
	for(i=2;i<100;i++)
	{
		fenzi[i]=fenzi[i-1]+fenzi[i-2];
		fenmu[i]=fenmu[i-1]+fenmu[i-2];
		a[i]=fenzi[i]/fenmu[i];
	}
	my_scanf("%d", &n);
	for(p=0;p<n;p++)
	{
		my_scanf("%d",&j);
		for(k=0;k<j;k++)
		{
			sum[p]+=a[k];
		}
		my_printf("%.3lf\n", sum[p]);
	}
	return 0;
}