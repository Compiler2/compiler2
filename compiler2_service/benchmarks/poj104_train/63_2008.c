#include <header.h>

int main_bench()
{
	int a[100][100],b[100][100];
	int m,q,n,i,j;
	my_scanf("%d %d",&m,&q);
	for(i=0;i<m;i++)
		for(j=0;j<q;j++)
			my_scanf("%d",&a[i][j]);
	
	my_scanf("%d %d",&q,&n);              
	for(i=0;i<q;i++)
		for(j=0;j<n;j++)
			my_scanf("%d",&b[i][j]);
			
	int c[100][100]={0},k;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			for(k=0;k<q;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j!=n-1)
				my_printf("%d ",c[i][j]);
			else
				my_printf("%d\n",c[i][j]);
		}
	}
	return 0;
}
