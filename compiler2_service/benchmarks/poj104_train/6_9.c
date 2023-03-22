#define NUM_ITER 31

#include <header.h>

int main_bench()
{
	int a[100][100][100],b[100],c[100],sum[100]={0};
	int i,j,k,p;
	my_scanf("%d",&k);
	for (p=0;p<k;p++)
	{
		my_scanf("%d %d",&b[p],&c[p]);
		for (i=0;i<b[p];i++)
		{
			for (j=0;j<c[p];j++)
				my_scanf("%d",&a[p][i][j]);
		}
	}
	for (p=0;p<k;p++)
	{
		for(i=0,j=0;j<c[p];j++)
			sum[p]=sum[p]+a[p][i][j];
		for (i=b[p]-1,j=0;j<c[p];j++)
			sum[p]=sum[p]+a[p][i][j];
		for (j=0,i=1;i<b[p]-1;i++)
			sum[p]=sum[p]+a[p][i][j];
		for (j=c[p]-1,i=1;i<b[p]-1;i++)
			sum[p]=sum[p]+a[p][i][j];
	}
	for (p=0;p<k-1;p++)
		my_printf("%d\n",sum[p]);
	my_printf("%d",sum[k-1]);
	return 0;
}