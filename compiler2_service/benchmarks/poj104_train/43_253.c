#define NUM_ITER 15516

#include <header.h>

int main_bench()
{
	int num,i,j,k=1,a[100000],b;

	my_scanf("%d",&num);
 
	for(i=1;i<=num;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				if(i==j)
				{
					a[k]=j;
					k++;
				}
			else
			break;
			}
		}
	}

	for (k;k>=1;k--)
	{
		for (b=1;b<=k;b++)
		{
			if (a[k]+a[b]==num)
			{
				my_printf("%d %d\n",a[b],a[k]);
			}
		}
	}
	return 0;
}