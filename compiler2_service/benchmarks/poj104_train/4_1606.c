#define NUM_ITER 562

#include <header.h>


int main_bench()
{
	int num[100][100];int line,row,i,j,m,n;
	my_scanf("%d %d",&row,&line);
	for(i=0;i<=row-1;i++)
	{
		for(j=0;j<=line-1;j++)
		{
			my_scanf("%d",&num[i][j]);
		}
	}
	for(j=0;j<=line-1;j++)
	{
		m=0;n=j;
	do
	{
		my_printf("%d\n",num[m][n]);
		m++;n--;
	}
	while (n!=-1&&m<row);
	}
	for(i=1;i<=row-1;i++)
	{
		m=i;n=line-1;
		do
		{
			my_printf("%d\n",num[m][n]);
			m++;n--;
		}
		while (n!=-1&&m<row);
	}
	return 0;
}
