#include <header.h>

int main_bench()
{
	int k;
	int m;
	int n;
	int i,j,t;
	int a[100][100];
	my_scanf("%d",&k);
	for(t=1;t<=k;t++)
	{
		int sum=0;
		my_scanf("%d %d",&m,&n);
		for(i=0;i<=m-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
				my_scanf("%d",&a[i][j]);
			}
		}
        for(i=0;i<=m-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
				sum=sum+a[i][j];
			}
		}
		for(i=1;i<=m-2;i++)
		{
			for(j=1;j<=n-2;j++)
			{
				sum=sum-a[i][j];
			}
		}
		my_printf("%d\n",sum);
	}
	return 0;
}
   

