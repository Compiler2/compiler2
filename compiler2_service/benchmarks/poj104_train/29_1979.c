#define NUM_ITER 1194

#include <header.h>



int main_bench()
{
	double shuzi[10000]={0};
	double fenshu[10000]={0};
	int i, j;
	int n, m;
	double sum=0;
    shuzi[0]=1;
	shuzi[1]=2;
	for(i=2;i<10000;i++)
	{
		shuzi[i]=shuzi[i-2]+shuzi[i-1];
	}
	for(i=0;i<10000;i++)
	{
		fenshu[i]=shuzi[i+1]/shuzi[i];
	}
	my_scanf("%d", &m);
	for(j=1;j<=m;j++)
	{
	my_scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		sum=sum+fenshu[i];
	}
	my_printf("%.3lf\n", sum);
	sum=0;
	}
	return 0;
}