#define NUM_ITER 4909

#include <header.h>

int main_bench()
{
	int n,m,i,j;
	double a,b,e[3000],sum,num;
	my_scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		my_scanf("%d",&n);
		e[1]=1;
		e[2]=2;
		num=e[2]/e[1];
		for(j=3;j<=n+1;j++)
		{
			e[j]=e[j-1]+e[j-2];
			num+=e[j]/e[j-1];
		}
		my_printf("%.3lf\n",num);
	}
	return 0;
}

