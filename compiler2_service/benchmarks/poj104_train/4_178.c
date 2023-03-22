#include <header.h>

int main_bench()
{
	int row,col,f[100][100],i,j;
	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			my_scanf("%d",&f[i][j]);
	}
for(j=0;j<col;j++)
{
	for(i=0;i<=j&&i<row;i++)
	{
		my_printf("%d",f[i][j-i]);
		my_printf("\n");
	}
}
for(j=1;j<row;j++)
{
	for(i=j;i<row&&i<=j+col-1;i++)
	{
	my_printf("%d",f[i][col-1+j-i]);
	my_printf("\n");
	}
}
return 0;
}


