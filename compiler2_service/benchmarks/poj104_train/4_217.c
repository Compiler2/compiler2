#include <header.h>

int main_bench()
{
	int row,col,i,j,a[100][100],n,t;
	my_scanf("%d%d",&row,&col);
	n=row+col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	for(t=0;t<n-1;t++)
	{
		for(i=0;i<=t;i++)
		{
			if(i<row&&(t-i)<col)
				my_printf("%d\n",a[i][t-i]);
			else 
		continue;
		}
	}
	return 0;
}
