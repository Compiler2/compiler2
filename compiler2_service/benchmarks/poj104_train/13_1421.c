#define NUM_ITER 50786

#include <header.h>

int main_bench()
{
	int a[101]={0};
	int n,b[20001],i,j=0,c[20001];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&b[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[b[i]]==0)
		{
			j++;
			c[j]=b[i];
			a[b[i]]=1;
		}
	}
	for(i=1;i<=j;i++)
	{
		my_printf("%d",c[i]);
		if(i!=j)
			my_printf(" ");
	}
	return 0;
}