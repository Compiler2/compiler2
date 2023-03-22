#include <header.h>

int main_bench()
{
	int a[100][100];
	int m, n, i, j, r;
	long flag=0;
	my_scanf("%d %d",&m,&n);
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++) my_scanf("%d",&a[i][j]);
	}
	for (r=0;r<m+n-1;r++)
	{
		for (i=0;i<=r&&flag<m*n;i++)
		{
			if (i<m&&r-i<n)
			{
				my_printf("%d\n",a[i][r-i]);
				flag++;
			}
		}
	}
	return 0;
}

