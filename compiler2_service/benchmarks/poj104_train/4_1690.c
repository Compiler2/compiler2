#define NUM_ITER 532

#include <header.h>


int main_bench()
{
	int sz[100][100];
	int a,b,row,col,i;
	my_scanf("%d %d",&a,&b);
	for(row=0;row<a;row++)
	{
		for(col=0;col<b;col++)
		{
			my_scanf("%d",&sz[row][col]);
		}
	}
	for(i=0;i<b;i++)
	{
		for(col=i;col>=0&&(i-col)<a;col--)
		{
			my_printf("%d\n",sz[i-col][col]);
		}
	}
	for(i=b;i<a+b;i++)
	{
		for(col=b-1;col>=0&&(i-col)<a;col--)
		{
			my_printf("%d\n",sz[i-col][col]);
		}
	}
	return 0;
}