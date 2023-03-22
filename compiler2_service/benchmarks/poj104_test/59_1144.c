#define NUM_ITER 13

#include <header.h>

int main_bench()
{
	int i,j,n,m,k,sum=0;
	char s[110][110],t;
	my_scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			my_scanf("\n");
			my_scanf("%c",&s[i][j]);
		}
	}
	my_scanf("%d",&m);
	for(k=1;k<m;k++)
	{
		for(i=1;i<=n;i++)
		{
		for(j=1;j<=n;j++)
		{
			if(s[i][j]=='@')
			{
				if(s[i+1][j]!='#'&&s[i+1][j]!='@')
				{
                     s[i+1][j]='!';
				}
				if(s[i-1][j]!='#'&&s[i-1][j]!='@')
				{
					 s[i-1][j]='!';
				}
				if(s[i][j+1]!='#'&&s[i][j+1]!='@')
				{
					 s[i][j+1]='!';
				}
				if(s[i][j-1]!='#'&&s[i][j-1]!='@')
				{
					 s[i][j-1]='!';
				}
			}
		}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(s[i][j]=='!')
				{
					s[i][j]='@';
				}
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(s[i][j]=='@')
			{
				sum++;
			}
		}
	}
	my_printf("%d",sum);
	return 0;
}

		
