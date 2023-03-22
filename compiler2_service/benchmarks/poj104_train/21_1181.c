#define NUM_ITER 5103

#include <header.h>

int main_bench()
{
	int n,i,j,num[310],sum,t;
	double aver;
	my_scanf("%d",&n);
	sum=0;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&num[i]);
		sum+=num[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(num[j]>num[j+1])
			{
				t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
		}
	}
	aver=(sum*1.0)/n;
	if(num[n-1]-aver>aver-num[0])
		my_printf("%d",num[n-1]);
	else{
		if(num[n-1]-aver==aver-num[0])
			my_printf("%d,%d",num[0],num[n-1]);
		else my_printf("%d",num[0]);
	}
	return 0;
}
