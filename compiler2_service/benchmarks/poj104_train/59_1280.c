#define NUM_ITER 76

#include <header.h>




int main_bench()
{
	int n,m,i,j,k,s=0;
	char a[102][102];
	my_scanf("%d",&n); 
	for(i=1;i<=n;i++)
	{
		getchar();
		for(j=1;j<=n;j++)
		{
			my_scanf("%c",&a[i][j]);
		}
	}
	my_scanf("%d",&m);
	for(k=1;k<m;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[i][j]=='@')
				{
					if(a[i][j+1]=='.')
					{
						a[i][j+1]='*';
					}
					if(a[i][j-1]=='.')
					{
						a[i][j-1]='*';
					}
					if(a[i+1][j]=='.')
					{
						a[i+1][j]='*';
					}
					if(a[i-1][j]=='.')
					{
						a[i-1][j]='*';
					}
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[i][j]=='*')
				{
					a[i][j]='@';
				}
			}
		}
	}
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=n;j++)
		{
		     if(a[i][j]=='@')
		     {
			     s++;
			 }
			
		} 
	} 
	my_printf("%d",s);
 
	return 0;
}