#include <header.h>

int main_bench()
{
	int n,m,i,j,r,k;
	int a[100][100];
	my_scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			my_scanf("%d",&a[i][j]);
		my_printf("\n");
		for(r=0,k=0;;r++)
		{
			for(i=r,j=r;j<=n-r-1;j++)
			{
				k++;
				my_printf("%d\n",a[i][j]);
			}
			if(k==m*n)break;
			for(i=r+1,j=n-1-r;i<=m-1-r;i++)
			{
				k++;
				my_printf("%d\n",a[i][j]);
			}
			if(k==m*n)break;
			for(i=m-1-r,j=n-r-2;j>=r;j--)
			{
				k++;
				my_printf("%d\n",a[i][j]);
			}
			if(k==m*n)break;
			for(i=m-2-r,j=r;i>=r+1;i--)
			{
				k++;
				my_printf("%d\n",a[i][j]);
			}
			if(k==m*n)break;
		}
	return 0;
}