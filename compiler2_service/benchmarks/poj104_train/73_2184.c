#define NUM_ITER 215229

#include <header.h>

int main_bench()
{
	int a[5][5];
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	int row,col,max;
	for(i=0;i<5;i++)
	{
		max = 0;
		for(j=0;j<5;j++)
		{
			if(a[i][j]>=max) 
			{
				max=a[i][j];    row=i;     col=j;
			}
		}
		for(j=0;j<5;j++)
		{
			if(max > a[j][col])   break;
		}
		if(j==5)
		{
			my_printf("%d %d %d",row+1,col+1,max);
			return 0;
		}
	}
	my_printf("not found\n");
	return 0;
}
