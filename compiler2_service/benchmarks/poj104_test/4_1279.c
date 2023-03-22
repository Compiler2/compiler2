#define NUM_ITER 454

#include <header.h>



int main_bench()
{
	int array[100][100];
	int row,col;
        int i,j,he;

	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			my_scanf("%d",&array[i][j]);
		}
	}

	for(he=0;he<row+col-1;he++)
	{
		for(j=he;j>=0;j--)
		{
			if(j>=col)
			{
				continue;
			}
			i=he-j;
			if(i>=row)
			{
				continue;
			}
			my_printf("%d\n",array[i][j]);
		}
	}
	return 0;
}
