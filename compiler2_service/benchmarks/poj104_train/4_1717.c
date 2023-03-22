#include <header.h>

int min(int a,int b)
{
	if(a<b) return a;
	else return b;
}
main_bench()
{
	int a[100][100];
	int row,col,i,j,k,l;
	my_scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		my_scanf("%d",&a[i][j]);
	}
	for(i=0;i<col;i++)
	{
		for(j=0;j<min(i+1,row);j++)
		{
		my_printf("%d\n",a[j][i-j]);
		}
	}	
	for(k=1;k<row;k++)
	{
          for(l=0;l<min(row-k,col);l++)
		  my_printf("%d\n",a[k+l][col-1-l]);
	}
}