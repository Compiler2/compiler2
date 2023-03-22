#define NUM_ITER 1277

#include <header.h>

int main_bench()
{
	int n,i,j,x[100];
	my_scanf("%d",&n);
	int a[100][100]={0};
	int sum;
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			a[i][j]=70;
		}
	}
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&x[i]);
		for(j=0;j<x[i];j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		j=0;
		sum=60-j*3;
		while((a[i][j]+3*j)<58&&j<x[i])
		{
			j++;
			sum=60-j*3;
		}
		if((a[i][j]+3*j)<60)
		{
			sum=sum-(60-(a[i][j]+3*j));
		}
		my_printf("%d\n",sum);
	}
}