#define NUM_ITER 13435

#include <header.h>

int a[9][9],row,line;
int check(int M,int N)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		if(a[i][N]<a[M][N])
			return 0;
	}
	for(j=0;j<line;j++)
	{
		if(a[M][j]>a[M][N])
			return 0;
	}
	return 1;
}
int main_bench()
{
	int i,j,judge=0;
	my_scanf("%d,%d",&row,&line);
	for(i=0;i<row;i++)
	{
		for(j=0;j<line;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<line;j++)
		{
			if(check(i,j))
			{
				my_printf("%d+%d\n",i,j);
				judge++;
				break;
			}
		}
		if(judge!=0)
			break;
	}
	if(judge==0)
		my_printf("No\n");
	return 0;
}