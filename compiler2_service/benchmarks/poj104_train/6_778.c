#define NUM_ITER 30

#include <header.h>

int main_bench()
{
	int k,m,n,i,j,a,sum=0;
	int sz[100][100];
	my_scanf("%d",&k);
	for(a=0;a<k;a++)
	{
		my_scanf("%d%d",&m,&n);
		sum=0;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				my_scanf("%d",&sz[i][j]);
			    if(i==0||i==m-1) sum+=sz[i][j];
		    	if(i>0&&i<m-1&&(j==0||j==n-1)) sum+=sz[i][j];
			}
		}	
		my_printf("%d\n",sum);
	}

	return 0;
}

