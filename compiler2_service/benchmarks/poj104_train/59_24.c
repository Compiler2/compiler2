#define NUM_ITER 133

#include <header.h>

int main_bench()
{
	char state[100][101],str[100][101];
	int n,m,i,j,count=0;
	my_scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(state[i]);
	}
	my_scanf("%d",&m);
	m=m-1;
	for(i=0;i<n;i++)
	{
		strcpy(str[i],state[i]);
	}
	while(m--)
	{
		for(i=0;i<n;i++)
		{
			strcpy(state[i],str[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(state[i][j]=='@')
				{
					if(i-1>=0&&state[i-1][j]=='.')
					{
						str[i-1][j]='@';
					}
					if(j-1>=0&&state[i][j-1]=='.')
					{
						str[i][j-1]='@';
					}
					if(i+1<n&&state[i+1][j]=='.')
					{
						str[i+1][j]='@';
					}
					if(j+1<n&&state[i][j+1]=='.')
					{
						str[i][j+1]='@';
					}
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		strcpy(state[i],str[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(state[i][j]=='@')
				count++;
		}
	}
	my_printf("%d",count);
	return 0;
}