#define NUM_ITER 546

#include <header.h>

int main_bench()
{
	int N;
	int **array,i,j;
	int a=1000,b=1000,c=0,d=0;
	my_scanf("%d",&N);
	array=(int**)malloc(N*sizeof(int*));
	for(i=0;i<N;i++)
	{
		array[i]=(int*)malloc(N*sizeof(int));
		for(j=0;j<N;j++)
		{
			my_scanf("%d",&array[i][j]);

			if(array[i][j]==0&&i<=a&&j<=b)
			{
				a=i;
				b=j;
			}
			if(array[i][j]==0&&i>=c&&j>=d)
			{
				c=i;
				d=j;
			}


		
		}
	}
	my_printf("%d",(c-a-1)*(d-b-1));
}