#define NUM_ITER 32

#include <header.h>

int main_bench()
{
	int k,m,n,i,j,a,num[150][150],sum;
	my_scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		my_scanf("%d %d\n",&m,&n);
		sum=0;
		for(j=0;j<m;j++)
		{
			for(a=0;a<n;a++)
			{
				my_scanf("%d",&num[j][a]);
			}
		}
		for(j=0;j<n;j++)
		{
			sum+=num[0][j];
                            if(m!=1)
{
			sum+=num[m-1][j];
}
		}
		for(j=1;j<m-1;j++)
		{
			sum+=(num[j][0]);
if(n!=1)
{
			sum+=num[j][n-1];
}

		}
		my_printf("%d\n",sum);
	}
	return 0;
}


