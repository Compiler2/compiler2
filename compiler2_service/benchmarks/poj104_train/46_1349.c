#define NUM_ITER 584

#include <header.h>

int main_bench()
{
	int row,col,a[100][100],i,j,sum,m=0;
	my_scanf("%d%d",&row,&col);
	sum=row*col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=i;j<col-i;j++)
		{
			my_printf("%d\n",a[i][j]);
			m++;
		}
		if(m==sum)
			break;
		i++;
		j--;
		for(;i<row-(col-j-1);i++)
		{
			my_printf("%d\n",a[i][j]);
			m++;
		}
		if(m==sum)
			break;
		j--;
		i--;
		for(;j>=row-i-1;j--)
		{
			my_printf("%d\n",a[i][j]);
			m++;
		}
		if(m==sum)
			break;
		i--;
		j++;
		for(;i>j;i--)
		{
			my_printf("%d\n",a[i][j]);
			m++;
		}
		if(m==sum)
			break;
	}
}