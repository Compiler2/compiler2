#define NUM_ITER 563

#include <header.h>

int main_bench()
{
	int sz[101][101];
	int row,col;
	my_scanf("%d%d",&row,&col);
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			my_scanf("%d",&(sz[i][j]));
		}
	}
	my_printf("%d",sz[0][0]);
	int a;
	for(i=1;i<col;i++)
	{
		a=i;
		for(j=0;j<row&&j<=i;j++)
		{
			my_printf("\n%d",sz[j][a]);
			a--;
		}
	}
	for(j=1;j<row;j++)
	{
		a=j;
		for(i=col-1;a<row&&i>=0;i--)
		{
		    my_printf("\n%d",sz[a][i]);
			a++;
		}
	}
	return 0;
}

