#define NUM_ITER 45

#include <header.h>





int main_bench()
{
	int n,m,a,b;
	int sum=0;
	int i,j,k;
	char kg;
	char sz[200][200];
	my_scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		my_scanf("%c",&kg);
		for(j=1;j<=n;j++)
		{
			my_scanf("%c",&sz[i][j]);
		}
	}

	my_scanf("%d",&m);

	for(k=0;k<m-1;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(sz[i][j]=='@')
				{
					if(sz[i+1][j]=='.')
					{
						sz[i+1][j]='r';
					}
					if(sz[i-1][j]=='.')
					{
						sz[i-1][j]='r';
					}
					if(sz[i][j+1]=='.')
					{
						sz[i][j+1]='r';
					}
					if(sz[i][j-1]=='.')
					{
						sz[i][j-1]='r';
					}
				}
			}
		}



		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(sz[i][j]=='r')
				{sz[i][j]='@';}
			}
		}



	}





	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(sz[i][j]=='@')
			{sum++;}
		}
	}


	my_printf("%d\n",sum);








	return 0;
}

