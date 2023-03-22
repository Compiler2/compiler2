#define NUM_ITER 426

#include <header.h>


int main_bench()
{
	int com(int a[][100],int x,int y);
	int m,n,b;
	int a[100][100]={0},i,j;
	my_scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	my_scanf("%d",&a[i][j]);}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b=com(a,i,j);
			if(b>0)
			{
				my_printf("%d %d\n",i,j);
			}
		}
	}
	return 0;
}

int com(int a[][100],int x,int y)
{
	int b=0;
	if(x==0)
	{
		if(y==0)
		{
			if(a[x][y]>=a[x+1][y]&&a[x][y]>=a[x][y+1])
				b=1;

		}
		else
		{
			if(a[x][y]>=a[x+1][y]&&a[x][y]>=a[x][y+1]&&a[x][y]>=a[x][y-1])
				b=1;
		}
	}
	else
	{
		if(y==0)
		{
			if(a[x][y]>=a[x+1][y]&&a[x][y]>=a[x][y+1]&&a[x][y]>=a[x-1][y])
				b=1;

		}
		else
		{
			if(a[x][y]>=a[x-1][y]&&a[x][y]>=a[x+1][y]&&a[x][y]>=a[x][y+1]&&a[x][y]>=a[x][y-1])
				b=1;
		}
	}
	return(b);
}






