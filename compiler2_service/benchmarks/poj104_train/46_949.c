#define NUM_ITER 583

#include <header.h>

int main_bench()
{
	int array[100][100];
	int n,row,col,i,j,k=0,r,t,x=0;
	float m;
	my_scanf("%d",&row);
	my_scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
	    	my_scanf("%d",&array[i][j]);
		}
	}
	if(row>col)
	{
		n=col;
	}
	else n=row;
	m=(float)n;
		while(k<m/2)
		{
			for(j=k;j<col-k;j++)
			{
				if(x!=row*col)
				{
					my_printf("%d\n",array[k][j]);
					x++;
				}
			}
			for(i=k+1;i<row-1-k;i++)
			{
				if(x!=row*col)
				{
					my_printf("%d\n",array[i][col-k-1]);
					x++;
				}
			}
			for(t=col-k-1;t>k;t--)
			{
				if(x!=row*col)
				{
					my_printf("%d\n",array[row-k-1][t]);
					x++;
				}
			}
			for(r=row-1-k;r>k;r--)
			{
				if(x!=row*col)
				{
					my_printf("%d\n",array[r][k]);
					x++;
				}
			}
			k++;
		}
	return 0;
}
