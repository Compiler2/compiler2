#define NUM_ITER 31

#include <header.h>

int main_bench()
{
	int a,x,m,n,i,j,k,sum[10000]={0};
	int sz[100][100];
	my_scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		my_scanf("%d %d",&m,&n);
		for(j=0;j<m;j++)
			{for(k=0;k<n;k++)
				{my_scanf("%d",&sz[j][k]);}
			}
		if((m>2)&&(n>2))
		{ for(j=0;j<m;j++)
			{ sum[i]=sum[i]+sz[j][0]+sz[j][n-1];}
		  for(k=0;k<n;k++)
			{sum[i]=sum[i]+sz[0][k]+sz[m-1][k];}
		  sum[i]=sum[i]-sz[0][0]-sz[0][n-1]-sz[m-1][0]-sz[m-1][n-1];
		}
		else { for(j=0;j<m;j++)
				{for(k=0;k<n;k++)
					{sum[i]=sum[i]+sz[j][k];}
				}
			 }
	}
    for(i=0;i<a;i++)
	{my_printf("%d\n",sum[i]);}
	return 0;
}
