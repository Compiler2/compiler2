#define NUM_ITER 521

#include <header.h>

int main_bench()
{
	int m,n,i,j,k,a[300][300]={0};
	my_scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n-1;j++)
		{
			my_scanf("%d ",&a[i][j]);
		}
		my_scanf("%d",&a[i][j]);
	}
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])
			{
				my_printf("%d %d",i,j);
			    my_printf("\n");
			}
		}
	}
	return 0;
}
