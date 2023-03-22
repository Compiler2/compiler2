#define NUM_ITER 4024

#include <header.h>

int main_bench()
{
	int m,i,j;
	int sz[1000];
	int fenzi[1000];
	int fenmu[1000];
	double xulie[1000];
	double sum[1000]={0};
	fenzi[0]=2;
	fenmu[0]=1;
	for(i=1;i<1000;i++)
	{
		fenmu[i]=fenzi[i-1];
		fenzi[i]=fenzi[i-1]+fenmu[i-1];
	}
	for(i=0;i<1000;i++)
	{
		xulie[i]=(double)fenzi[i]/fenmu[i];
	}
	my_scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<sz[i];j++)
		{
			sum[i]+=xulie[j];
		}
	}
	for(i=0;i<m;i++)
	{
		my_printf("%.3lf\n",sum[i]);
	}
	return 0;
}
