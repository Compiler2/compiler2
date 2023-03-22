#define NUM_ITER 539

#include <header.h>

int main_bench()
{
	int row,col,sz[100][100],i,j;
	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			my_scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<col;i++)
	{
		for(j=0;j<i+1;j++)
		{
			if(j>=row)
			{
				break;
			}
			else
			{
				my_printf("%d\n",sz[j][i-j]);
			}
		}
	}
	for(i=1;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i+j>=row)
			{
				break;
			}
			else
			{
			    my_printf("%d\n",sz[i+j][col-j-1]);
			}
		}
	}
	return 0;
}