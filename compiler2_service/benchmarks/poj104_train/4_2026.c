#define NUM_ITER 563

#include <header.h>


int main_bench()
{
	int row=0,col=0,array[100][100];
	int i=0,j=0;
	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			my_scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<col;i++)
	{
		j=0;
		while(j<=i&&j<row)
		{
			my_printf("%d\n",array[j][i-j]);
			j++;
		}
	}
	for(i=1;i<row;i++)
	{
		j=0;
		while(j<=row-i-1&&j<col)
		{
			my_printf("%d\n",array[i+j][col-1-j]);
			j++;
		}
	}
	return 0;
}