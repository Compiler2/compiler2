#define NUM_ITER 571

#include <header.h>

int main_bench()
{
	int row,col,n,i,j,a[100][100];
	int sum=0;
	my_scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			my_scanf("%d",&(a[i][j]));
		}
	}
	for(n=0;n<=row;n++)
	{
		for(i=n;i<col-n;i++)
		{
			my_printf("%d\n",a[n][i]);
			sum++;
		}
		if(sum==row*col)break;
		for(j=n+1;j<row - n;j++)
		{
			my_printf("%d\n",a[j][col-(n+1)]);
			sum++;
		}
		if(sum==row*col)break;
		for(i=col-(n+1)-1;i>=n;i--)
		{
			my_printf("%d\n",a[row-(n+1)][i]);
			sum++;
		}
		if(sum==row*col)break;
		for(j=row-(n+1)-1;j>n;j--)
		{
			my_printf("%d\n",a[j][n]);
			sum++;
		}
		if(sum==row*col)break;
	}
	return 0;
}