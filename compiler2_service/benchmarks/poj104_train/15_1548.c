#define NUM_ITER 658

#include <header.h>

int main_bench()
{
	int n,sz[100][100];
	int row,col,a=0,b=0,c=0,d=0,s=0,p=0;
	int i,j,k,l;
	my_scanf("%d",&n);
	for(row=0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			my_scanf("%d",&sz[row][col]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(p!=1)
		{
			for(j=0;j<n;j++)
			{
				if(sz[j][i]==0)
				{
					a=j;
					b=i;
					p=1;
					break;
				}
			}
		}
		else
		{
			break;
		}
	}
	for(k=n-1;k>=0;k--)
	{
		if(p!=0)
		{
			for(l=n-1;l>=0;l--)
			{
				if(sz[l][k]==0)
				{
					c=l;
					d=k;
					p=0;
					break;
				}
			}
		}
		else
		{
			break;
		}
	}
	s=(c-a-1)*(d-b-1);
	my_printf("%d",s);
	return 0;
}