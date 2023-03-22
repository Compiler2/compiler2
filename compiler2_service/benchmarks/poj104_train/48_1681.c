#define NUM_ITER 1081

#include <header.h>

int main_bench()
{
	int a[9][9]={0},b[9][9]={0};
	int i,j,k,m,n;
	my_scanf("%d%d",&m,&n);
	a[4][4]=m;
	b[4][4]=m;
	for(k=0;k<n;k++)
	{
		for(i=0;i<9;i++)
			for(j=0;j<9;j++)
			{
				if(i!=0&&i!=8&&j!=0&&j!=8)
					a[i][j]=2*b[i][j]+b[i][j-1]+b[i][j+1]+b[i-1][j]+b[i+1][j]+b[i-1][j-1]+b[i-1][j+1]+b[i+1][j-1]+b[i+1][j+1];
				if(i==0&&j==0)
					a[i][j]=2*b[i][j]+b[i][j+1]+b[i+1][j]+b[i+1][j+1];
				if(i==8&&j==0)
					a[i][j]=2*b[i][j]+b[i-1][j]+b[i][j+1]+b[i-1][j+1];
				if(i==0&&j==8)
					a[i][j]=2*b[i][j]+b[i-1][j]+b[i+1][j]+b[i+1][j-1];
				if(i==8&&j==8)
					a[i][j]=2*b[i][j]+b[i-1][j]+b[i][j-1]+b[i-1][j-1];
				if(i==0&&j!=0&&j!=8)
					a[i][j]=2*b[i][j]+b[i][j-1]+b[i][j+1]+b[i+1][j]+b[i+1][j-1]+b[i+1][j+1];
				if(i==8&&j!=0&&j!=8)
					a[i][j]=2*b[i][j]+b[i][j-1]+b[i][j+1]+b[i-1][j]+b[i-1][j-1]+b[i-1][j+1];
				if(j==0&&i!=0&&i!=8)
					a[i][j]=2*b[i][j]+b[i-1][j]+b[i+1][j]+b[i][j+1]+b[i-1][j+1]+b[i+1][j+1];
				if(j==8&&i!=0&&i!=8)
					a[i][j]=2*b[i][j]+b[i-1][j]+b[i+1][j]+b[i][j-1]+b[i-1][j-1]+b[i+1][j-1];
			}
		for(i=0;i<9;i++)
			for(j=0;j<9;j++)
				b[i][j]=a[i][j];
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(j==0)
				my_printf("%d",a[i][j]);
			else if(j==8)
				my_printf(" %d\n",a[i][j]);
			else
				my_printf(" %d",a[i][j]);
		}
	}
	return 0;
}








