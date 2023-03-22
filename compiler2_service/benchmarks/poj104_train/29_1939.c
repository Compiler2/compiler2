#define NUM_ITER 4520

#include <header.h>

double SUM(int n)
{
	double i=5.0,j=3.0,temp,sum=3.5;
	int k;
	for(k=3;k<=n;k++)
	{
		sum=sum+i/j;
		temp=i;
		i=i+j;
		j= temp;
	}
	return sum;
}
int main_bench()
{
	int m,n,i;
	my_scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		my_scanf("%d",&n);
	if(n==1)
		my_printf("2.000\n");
	if(n==2)
		my_printf("3.500\n");
	if(n>=3)
		my_printf("%.3f\n",SUM(n));
	}
	return 0;
}