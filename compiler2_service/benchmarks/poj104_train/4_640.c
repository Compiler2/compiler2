#include <header.h>

int main_bench()
{
	int m,n,i,j,k,a[100][100];
	my_scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
		my_printf("%d\n",a[0][0]);
	for(j=1;j<n;j++)
	{
		for(i=0;i<j+1&&i<m;i++)
		{
			my_printf("%d\n",a[i][j-i]);
		}
	}
	for(i=1;i<m;i++)
	{
		for(j=0;j<n&&j<m-i;j++)my_printf("%d\n",a[j+i][n-1-j]);
	}

	


	return 0;
}