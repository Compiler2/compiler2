#define NUM_ITER 42124

#include <header.h>


int main_bench()
{
	int n,shu[100],i,j,a=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&shu[i]);
	}
	for(i=1;i<3;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(shu[j]>shu[j+1])
			{
				a=shu[j];
				shu[j]=shu[j+1];
				shu[j+1]=a;
			}
		}
	}
	for(i=1;i<3;i++)
	{
		my_printf("%d\n",shu[n-i]);
	}
	return 0;
}
