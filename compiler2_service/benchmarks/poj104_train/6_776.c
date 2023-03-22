#define NUM_ITER 31

#include <header.h>

int main_bench()
{
	int k;
	my_scanf("%d",&k);
	int m,n;
	int a[100][100];
	int i;
	int j;
	int e;
    int sum[100]={0};
	for(e=0;e<k;e++)
	{
        my_scanf("%d%d",&m,&n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{	
				my_scanf("%d",&a[i][j]);
			}
		}
		for(j=0;j<n;j++)
		{
			sum[e]=sum[e]+a[0][j];
		}
     	for(i=1;i<m;i++)
		{
			sum[e]=sum[e]+a[i][n-1];
		}
     	for(j=n-2;j>=0;j--)
		{
			sum[e]=sum[e]+a[m-1][j];
		}
	    for(i=m-2;i>0;i--)
		{
			sum[e]=sum[e]+a[i][0];
		}
	}
    for(e=0;e<k;e++)
	{
		my_printf("%d\n",sum[e]);
	}
	return 0;
}