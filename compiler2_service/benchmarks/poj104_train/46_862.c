#include <header.h>

int main_bench()
{
	int sz[100][100];
	int row,col,i,j,a=0;
	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			my_scanf("%d",&sz[i][j]);
		}
	}

	while(a<row-1&&a<col-1)
	{
		for(i=a,j=a;j<col-1;j++)
		{
			my_printf("%d\n",sz[i][j]);
		}
		for(j=col-1,i=a;i<row-1;i++)
		{

			my_printf("%d\n",sz[i][j]);
		}
		for(i=row-1,j=col-1;j>a;j--)
		{
			my_printf("%d\n",sz[i][j]);
		}
		for(j=a,i=row-1;i>a;i--)
		{
			my_printf("%d\n",sz[i][j]);
		}
		col--;
	    row--;
		a++;
	}
	if(a==row-1)
	{
		for(i=a,j=a;j<col;j++)
			my_printf("%d\n",sz[i][j]);
	}
	else if(a==col-1)
	{
		for(j=a,i=a;i<row;i++)
			my_printf("%d\n",sz[i][j]);
	}
	                                                                        
	return 0;
}