#define NUM_ITER 30

#include <header.h>


int main_bench()
{
	int n = 0;
	int x = 0,y = 0;
	int total = 0;
	int Matrix[100][100] = {{0},{0}};
	my_scanf("%d",&n);
	for (int k = 0; k < n; k++)				
	{
		my_scanf ("%d %d", &x, &y);			
		for(int i=0;i<x;i++)
			for (int j = 0; j < y; j ++)
			{
				my_scanf("%d", &Matrix[i][j]);
				if (i == 0||i == x - 1)			
					total += Matrix[i][j];
				else
					if (j == 0 || j == y - 1)		
						total += Matrix[i][j];
			}
		my_printf("%d\n",total);
		total = 0;						
	}
	return 0;
}