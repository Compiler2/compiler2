#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int shu[300];
	int i;
	double a=0.0;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&shu[i]);
		a=a+(double)shu[i]/n;
	}
	int j,t;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(shu[j]<shu[j-1])
			{
				t=shu[j-1];
				shu[j-1]=shu[j];
				shu[j]=t;
			}
		}
	}
	if(a-shu[0]>shu[n-1]-a)
		my_printf("%d",shu[0]);
	else if(a-shu[0]<shu[n-1]-a)
		my_printf("%d",shu[n-1]);
	else
		my_printf("%d,%d\n",shu[0],shu[n-1]);
	return 0;
}
