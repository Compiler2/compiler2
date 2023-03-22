#include <header.h>

int main_bench()
{
	int a[9][9]={0},b[9][9]={0};
	int m,n,i,j,k;
	my_scanf("%d%d",&m,&n);
	a[4][4]=m;
	for(k=0;k<n;k++)
	{
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				b[i][j]+=2*a[i][j];
				b[i-1][j]+=a[i][j];
				b[i-1][j-1]+=a[i][j];
				b[i-1][j+1]+=a[i][j];
				b[i][j-1]+=a[i][j];
				b[i][j+1]+=a[i][j];
				b[i+1][j-1]+=a[i][j];
				b[i+1][j+1]+=a[i][j];
				b[i+1][j]+=a[i][j];
			}
		}
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				a[i][j]=b[i][j];
				b[i][j]=0;
			}
		}
	}
				for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				if(j==0)
				my_printf("%d",a[i][j]);
				else
					my_printf(" %d",a[i][j]);
			}
			my_printf("\n");
		}
				return 0;
}