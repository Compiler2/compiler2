#define NUM_ITER 570

#include <header.h>

int main_bench()
{
	int x[100][100];
	int a,b;
	my_scanf("%d %d",&a,&b);
	int m,n;
	for(m=0;m<a;m++)
	{
		for(n=0;n<b;n++)
		{
			my_scanf("%d",&x[m][n]);
		}
	}
	int xx_row=0,sx_row=a-1;
	int xx_col=0,sx_col=b-1;
	int i,j;
	while((xx_row<sx_row)&&(xx_col<sx_col))
	{
		for(j=xx_col;j<sx_col;j++)
		{
			my_printf("%d\n",x[xx_row][j]);
		}
		for(i=xx_row;i<sx_row;i++)
		{
			my_printf("%d\n",x[i][sx_col]);
		}
		for(j=sx_col;j>xx_col;j--)
		{
			my_printf("%d\n",x[sx_row][j]);
		}
		for(i=sx_row;i>xx_row;i--)
		{
			my_printf("%d\n",x[i][xx_col]);
		}
		xx_row++;
		sx_row--;
		xx_col++;
		sx_col--;
	}
	if((xx_row==sx_row)&&(xx_col==sx_col))                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
	{
		my_printf("%d\n",x[xx_row][xx_col]);
	}
	if((xx_row==sx_row)&&(xx_col!=sx_col))
	{
		for(i=xx_col;i<=sx_col;i++)
		{	my_printf("%d\n",x[xx_row][i]);}
	}
	if((xx_col==sx_col)&&(xx_row!=sx_row))
	{
		for(i=xx_row;i<=sx_row;i++)
		{	my_printf("%d\n",x[i][xx_col]);}
	}
	return 0;
}
