#define NUM_ITER 79

#include <header.h>

int main_bench()
{
	int n,i,j,k=0,m,s=0;
	char a[105][105],b[105][105];
	my_scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(a[i]);
	}
	for(i=0;i<=n;i++)
		a[i][n]=a[n][i]='#';
	my_scanf("%d",&m);
	for(j=0;j<=n;j++)
		for(k=0;k<=n;k++)
				b[j][k]=a[j][k];
	for(i=1;i<m;i++)
	{
        for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(a[j][k]=='.')
				{if(a[j][k+1]=='@'||a[j+1][k]=='@')
						b[j][k]='@';
				else 
				{if(k!=0)
				    if(a[j][k-1]=='@')
						b[j][k]='@';
			     if(i!=0)
					if(a[j-1][k]=='@')
						b[j][k]='@';
				}
				}
				else
					b[j][k]=a[j][k];
			}
		}
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				a[j][k]=b[j][k];
	}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{if(a[i][j]=='@')
		s++;}
			my_printf("%d",s);
	return 0;
}
