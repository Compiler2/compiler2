#define NUM_ITER 113

#include <header.h>

int main_bench()
{
	int t,m,n,i,j,l;
	my_scanf("%d",&t);
	for(l=0;l<t;l++)
	{
		my_scanf("%d %d",&m,&n);
		int a[100][100];
		for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			if(i==1) a[i][j]=1;
			else if(j==1) a[i][j]=1;
			else if(i==j) a[i][j]=a[i][j-1]+1;
			else if(i<j)  a[i][j]=a[i][j-1];
			else if(j<i)  a[i][j]=a[i][j-1]+a[i-j][j];
		}
		my_printf("%d\n",a[m][n]);
	}
} 