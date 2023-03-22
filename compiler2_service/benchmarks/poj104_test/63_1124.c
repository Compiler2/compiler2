#include <header.h>


int main_bench()
{
	int a[100][100],b[100][100],c[100][100]={0},i,j,m,n,p,q,r=0;
	my_scanf("%d %d",&m,&n);
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&p,&q);
	for (i=0;i<p;i++)
	{
		for (j=0;j<q;j++)
		{
			my_scanf("%d",&b[i][j]);
		}
	}
    for (i=0;i<m;i++)
	{
		for (j=0;j<q;j++)
		{
			r=0;
			while (r<n)
			{
				c[i][j]+=a[i][r]*b[r][j];
				r++;
			}
		}
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<q;j++)
		{
			if (j==0)
			{
				my_printf("%d",c[i][j]);
			}
			else
			{
				my_printf(" %d",c[i][j]);
			}
		}
		my_printf("\n");
	}
	return 0;
}

