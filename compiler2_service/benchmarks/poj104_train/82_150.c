#define NUM_ITER 5733

#include <header.h>

int main_bench()
{
	int a,b,c=0,e,n,i,k;
	int sz[100]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90)
		{
	sz[c]++;
		}
		else
		{
		c++;
		}
	}
	for(i=0;i<99;i++)
	{
		for(k=0;k<99-i;k++)
		{
			if(sz[k]>sz[k+1])
			{
				e=sz[k];
				sz[k]=sz[k+1];
				sz[k+1]=e;
			}
		}
	}
	my_printf("%d",sz[99]);


	return 0;
}