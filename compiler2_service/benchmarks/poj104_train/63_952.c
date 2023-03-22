#include <header.h>

int main_bench()
{
	int a[101][101],b[101][101],i,j,k,c[101][101]={0},x1,y1,x2,y2;
    my_scanf("%d %d",&x1,&y1);
	for(i=1;i<=x1;i++)
	{
		for(j=1;j<=y1;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&x2,&y2);
	for(i=1;i<=y1;i++)
	{
		for(j=1;j<=y2;j++)
		{
			my_scanf("%d",&b[i][j]);
		}
	}
	for(i=1;i<=x1;i++)
	{
		for(j=1;j<=y2;j++)
		{
			for(k=1;k<=y1;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	for(i=1;i<=x1-1;i++)
	{
		for(j=1;j<=y2-1;j++)
		{
			my_printf("%d ",c[i][j]);
		}
		my_printf("%d\n",c[i][y2]);
	}
	for(j=1;j<=y2-1;j++)
	{
		my_printf("%d ",c[x1][j]);
	}
	my_printf("%d",c[x1][y2]);
}