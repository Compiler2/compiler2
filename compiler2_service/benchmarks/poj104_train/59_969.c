#define NUM_ITER 19

#include <header.h>

int main_bench()
{
	char a[102][102]={'0'},b[102][102]={'0'};
	int n,m,i,j,k,sum;
	my_scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			my_scanf("%c",&b[i][j]);
			a[i][j]=b[i][j];
		}
		my_scanf("\n");
	}
	my_scanf("%d",&m);
	for(k=0;k<m-1;k++)
	{
		for(i=1;i<=n;i++)
		{
		    for(j=1;j<=n;j++)
			{
				if(b[i][j]=='@')
				{
					if(a[i+1][j]=='.')
					{
						a[i+1][j]='@';
					}
					if(a[i][j+1]=='.')
					{
						a[i][j+1]='@';
					
					}if(a[i-1][j]=='.')
					{
						a[i-1][j]='@';
					
					}if(a[i][j-1]=='.')
					{
						a[i][j-1]='@';
					
					}
				}
			}
		}
		for(i=1;i<=n;i++)
		{ 
		    for(j=1;j<=n;j++)
			{
				b[i][j]=a[i][j];
			}
		}
	}
	sum=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(b[i][j]=='@')
			{
				sum++;
			}
		}
	}
	my_printf("%d",sum);
	return 0;
}