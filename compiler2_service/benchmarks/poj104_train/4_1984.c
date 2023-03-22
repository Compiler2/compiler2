#define NUM_ITER 41

#include <header.h>

int main_bench()
{
	int row,col,k,i,j;
	int a[100][100]={{0},{0}};
	my_scanf("%d%d",&row,&col);
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
			my_scanf("%d",&a[i][j]);
			}
		}
		for(k=0;k<row+col-1;)
		{
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
				if(i+j==k)
				{
					my_printf("%d\n",a[i][j]);
				}
				}
			}
		k++;
		}
}

