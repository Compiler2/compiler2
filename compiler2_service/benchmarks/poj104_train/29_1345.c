#define NUM_ITER 4737

#include <header.h>

int main_bench()
{
	int i,m,n,j;
	float sl[1000],add[1000];
	my_scanf("%d",&m);
	for(j=0;j<m;j++)
	{
		my_scanf("%d",&n);
		sl[0]=1;
		sl[1]=2;
		add[j]=0;
		for(i=0;i<n;i++)
		{
			add[j]=sl[i+1]/sl[i]+add[j];
			sl[i+2]=sl[i]+sl[i+1];
		}
	}
	for(j=0;j<m;j++)
	{
		my_printf("%.3f\n",add[j]);
	}
	return 0;
}
