#define NUM_ITER 489

#include <header.h>

int main_bench()
{
	int col,row;
	int mat[200][200];
	int i,j;

	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			my_scanf("%d",&mat[i][j]);
	for(i=0,j=0;;)
	{
		if(i<row&&j<col)
		    my_printf("%d\n",mat[i][j]);
        if(i==row-1&&j==col-1)break;
		if(j==0)
		{
			j=i+1;
			i=0;
		}
		else
		{
			i++;
			j--;
		}
	}
	return 0;
}