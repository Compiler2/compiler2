#define NUM_ITER 31

#include <header.h>



const int N=110;

int a[N][N];

int main_bench()
{
	int i,j,k;
	int x;
	int m,n;
	my_scanf("%d",&x);
	while(x--)
	{
		memset(a,0,sizeof(a));
		my_scanf("%d%d",&m,&n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				my_scanf("%d",&a[i][j]);
			}
		}
		int sum=0;
		if(m==1)
		{
			for(i=0;i<n;i++)
				sum+=a[0][i];
		}
		else if(n==1)
		{
			for(i=0;i<m;i++)
				sum+=a[i][0];
		}
		else
		{
			for(i=0;i<n;i++)
			{
			sum+=a[0][i];
			sum+=a[m-1][i];
			}
			for(i=1;i<m-1;i++)
			{
			sum+=a[i][0];
			sum+=a[i][n-1];
			}
		}
		my_printf("%d\n",sum);
	}
	return 0;
}