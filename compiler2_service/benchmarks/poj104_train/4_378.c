#define NUM_ITER 576

#include <header.h>

int main_bench()
{
	int row,col,i,j,m,p;
	my_scanf("%d %d",&row,&col);
	int a[100][100];
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
		my_scanf("\n");
	}


	for (m=0;m<=col+row-2;m++)
	{
		if (m<col)
		{
			for(p=0;p<=row-1&&p<=m;p++)
			{
			
			my_printf("%d\n",a[p][m-p]);
			}
		}
		
	
		if (m>=col)
		{
			for(p=m-col+1;p<=m&&p<=row-1;p++)
			{
			
			my_printf("%d\n",a[p][m-p]);
			}
		}

	}

	return 0;
}
	