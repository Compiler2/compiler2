#define NUM_ITER 1640

#include <header.h>

int main_bench()
{
	int N,i,j,b;
	int a[100]={0};
	my_scanf("%d",&N);
	a[0]=1;
	for(i=0;i<N;i++)
	{
		for(j=0;j<100;j++)
		{
			a[j]*=2;
		}
		for(j=0;j<100;j++)
		{
			if(a[j]>9)
			{
				a[j+1]++;
				a[j]%=10;
			}
		}
	}
	for(j=99;j>=0;j--)
	{
		if(a[j]!=0)
		{
			b=j;
			break;
		}
	}
	for(j=b;j>=0;j--)
	{
		my_printf("%d",a[j]);
	}
	return 0;
}


