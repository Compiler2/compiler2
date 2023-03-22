#include <header.h>

int main_bench()
{
	int r,c,a[100][100],i,j,k,b[10000];
	my_scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{for(j=0;j<c;j++)
	my_scanf("%d",&a[i][j]);}
	for(j=0;j<c;j++)
	{i=0;
	for(k=j;k>=0&&i<r;k--,i++)
	{my_printf("%d\n",a[i][k]);}}
	for(i=1;i<r;i++)
	{j=c-1;
	for(k=i;k<r&&j>=0;k++,j--)
	{my_printf("%d\n",a[k][j]);}
	}
	return 0;
}




