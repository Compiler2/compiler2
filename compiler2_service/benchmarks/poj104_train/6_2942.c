#define NUM_ITER 32

#include <header.h>

int main_bench()
{
	int k,m,n,y;
	int z[100][100];
	my_scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		y=0;
		my_scanf("%d%d",&m,&n);
		for(int j=0;j<m;j++)
		{
			for(int t=0;t<n;t++)
			{
				my_scanf("%d",&z[j][t]);
			}
		}
		for(int a=0;a<m;a++)
		{
			y=y+z[a][0]+z[a][n-1];
		}
		for(int b=0;b<n;b++)
		{
			y=y+z[0][b]+z[m-1][b];
		}
                  y=y-z[0][0]-z[0][n-1]-z[m-1][0]-z[m-1][n-1];
		my_printf("%d\n",y);
	}
	return 0;
}