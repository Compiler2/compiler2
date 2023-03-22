#define NUM_ITER 656

#include <header.h>

int sz[1000][1000];
int main_bench()
{
	int n;
	int row,col;
	int a,b,c,d;
	int x,y;
	int num;
	int e=0,f=0;
	my_scanf("%d",&n);
	for(row=0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			my_scanf("%d",&sz[row][col]);
		}
	}
	for(row=0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			if(sz[row][col]==0)
			{
				a=row;
				b=col;
				e=1;
				break;
			}
		}
		if(e==1)
		{
			break;
		}
	}
	for(row=n-1;row>=0;row--)
	{
		for(col=n-1;col>=0;col--)
		{
			if(sz[row][col]==0)
			{
				c=row;
				d=col;
				f=1;
				break;
			}
		}
		if(f==1)
		{
			break;
		}
	}
	x=c-a-1;
	y=d-b-1;
	num=x*y;
	my_printf("%d\n",num);
	return 0;
}
