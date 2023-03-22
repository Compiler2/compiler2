#include <header.h>

int shulie(int n);
int main_bench()
{
	int n,i,j,weizhi[100],jl[500]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&weizhi[i]);
	}
	for(i=0;i<n;i++)
	{
		jl[i]=shulie(weizhi[i]);
	}
	for(i=0;i<n;i++)
	{
		my_printf("%d\n",jl[i]);
	}
	return 0;
}
int shulie(int n)
{
	int i,shulie[500]={1,1};
	for(i=2;i<n;i++)
	{
		shulie[i]=shulie[i-1]+shulie[i-2];
	}
	return shulie[i-1];
}