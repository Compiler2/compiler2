#include <header.h>

double f(int n)
{
	if(n==1)
	{
		return 2.0;
	}
	else
	{
		return 1/f(n-1)+1.0;
	}
}
int main_bench()
{
	int a,i,m,j;
	double sum;
	my_scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		sum=0.0;
		my_scanf("%d",&m);
		for(j=1;j<m+1;j++)
		{
			sum+=f(j);
		}
		my_printf("%.3lf\n",sum);
	}
	return 0;
}

