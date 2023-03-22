#include <header.h>


int main_bench()
{
	int n,i,m,j;
	my_scanf("%d",&m);
	int as[200]={0};
	as[0]=1;
	as[1]=2;
	for(i=2;i<200;i++)
	{
		as[i]=as[i-1]+as[i-2];
	}
	int a[100]={0};
	for(i=0;i<m;i++)
	{
		my_scanf("%d",&a[i]);
	}
	double sum=0;
	for(i=0;i<m;i++)
	{
		for(j=0,sum=0;j<a[i];j++)
		{
			sum=sum+(double)as[j+1]/(double)as[j];
		}
		my_printf("%.3lf\n",sum);
	}
}
		



