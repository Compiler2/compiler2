#include <header.h>

int main_bench()
{
	int a[100][100];
	int row,col,t,i,j;
	my_scanf("%d%d",&row,&col);
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{my_scanf("%d",&a[i][j]);}}
     row-=1;
	 col-=1;
	 t=row+col;
     for(i=0;i<=t;i++)
     {for(j=0;j<=i;j++)
	 {   if(j>row||(i-j)>col)
	 continue;
		 my_printf("%d\n",a[j][i-j]);}}
	return 0;
}
