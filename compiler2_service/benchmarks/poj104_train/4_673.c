#define NUM_ITER 486

#include <header.h>

int main_bench()
{
	int col,row,i,j,n,a[101][101],t;
	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++) my_scanf("%d",&a[i][j]);
	for(i=0;i<=row+col-2;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j<row&&(i-j)<col)
			my_printf("%d\n",a[j][i-j]);
		}
	}
	my_scanf("%d",&t);
}