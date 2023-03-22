#define NUM_ITER 706

#include <header.h>

int main_bench()
{
	int n,i,j,a,b,x,y,s;
	a=0;
	b=0;
	x=-1;
	y=-1;
	my_scanf("%d",&n);
	int tx[1000][1000];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&tx[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(tx[i][j]==0)
			{
				x=j;
				y=i;
				break;
			}
		}
		if((x==j)&&(y==i))
			break;
	}
	for(x=j;x<n;x++)
	{
		if(tx[x][i]==0)
		{
			a=a+1;
		}
	}
	for(y=i;y<n;y++)
	{
		if(tx[j][y]==0)
		{
			b=b+1;
		}
	}
	s=a*b-2*(a+b-2);
	my_printf("%d",s);
	return 0;
}
