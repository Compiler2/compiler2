#define NUM_ITER 2655

#include <header.h>

int fenjie(int x,int k)
{
	int t=1,i;
	if(k>x)
	{
		return 0;
	}
	for(i=k;i<x;i++)
	{
		if(x%i==0)
		{
			t=t+fenjie(x/i,i);
		}
	}
	return t;
}
int main_bench()
{
	int j,p,n,a[101];
	my_scanf("%d",&n);
	for(j=0;j<=n-1;j++)
	{
		my_scanf("%d",&a[j]);
	}
	for(j=0;j<=n-1;j++)
	{
		my_printf("%d",fenjie(a[j],2));
		my_printf("\n");
	}
	return 0;
}