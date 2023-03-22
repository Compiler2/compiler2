#define NUM_ITER 30

#include <header.h>

int main_bench()
{
	int sz[100][100],n,s[100]={0},i,j,len,col,m,sum=0;
	my_scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		my_scanf("%d%d",&len,&col);
		for(i=0;i<len;i++)
		{
			for(j=0;j<col;j++)
			{
				my_scanf("%d",&sz[i][j]);
				sum+=sz[i][j];
			}
		}
		if(col==1||len==1)
		{
			s[m]=sum;
		}
		else
		{
			for(j=0;j<col-1;j++)
			{
				s[m]+=sz[0][j];
			}
			for(i=0;i<len-1;i++)
			{
				s[m]+=sz[i][col-1];
			}
			for(j=1;j<col;j++)
			{
				s[m]+=sz[len-1][j];
			}
			for(i=1;i<len;i++)
			{
				s[m]+=sz[i][0];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		my_printf("%d\n",s[i]);
	}
	return 0;
}