#define NUM_ITER 32

#include <header.h>

int main_bench()
{
	int n,m,i,t,j,p=0;
	char a[102][102],c[101],b[102][102];
	my_scanf("%d",&n);
	for(i=0;i<n+2;i++)
	{
		for(j=0;j<n+2;j++)
		{
			a[i][j]='#';
			b[i][j]='#';
		}
	}

	for(i=0;i<n;i++)
	{
		my_scanf("%s",c);
	
		for(j=1;j<=n;j++)
		{
			a[i+1][j]=c[j-1];
			b[i+1][j]=c[j-1];
		}
	
	}
		my_scanf("%d",&m);
	
	for(i=1;i<m;i++)
	{
		for(t=1;t<=n;t++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[t][j]=='@')
				{
					if(a[t-1][j]=='.')
						b[t-1][j]='@';
					if(a[t+1][j]=='.')
						b[t+1][j]='@';
					if(a[t][j+1]=='.')
						b[t][j+1]='@';
					if(a[t][j-1]=='.')
						b[t][j-1]='@';
				}
			}
		}
		
				for(t=1;t<=n;t++)
		{
			for(j=1;j<=n;j++)
			{
				a[t][j]=b[t][j];
		}
				}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]=='@')
				p++;
		}
	}
	my_printf("%d",p);
		return 0;
}































