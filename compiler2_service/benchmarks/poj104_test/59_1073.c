#define NUM_ITER 67

#include <header.h>

int main_bench()
{
	int n,i,j,count=0;
	char s[105][105];
	my_scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(s[i]);
	}
	int m,r;
	my_scanf("%d",&m);
	if(m>1)
	{
	    for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
			    for(r=0;r<n;r++)
				{
				    if(s[j][r]=='*')
					{
					    s[j][r]='@';
					}
				}
			}
		    for(j=0;j<n;j++)
			{
			    for(r=0;r<n;r++)
				{
				    if(s[j][r]=='@')
					{
					    if(j!=0 && s[j-1][r]=='.')
						{
						    s[j-1][r]='*';
						}
					    if(j!=n-1 && s[j+1][r]=='.')
						{
					    	s[j+1][r]='*';
						}
					    if(r!=n-1 && s[j][r+1]=='.')
						{
					    	s[j][r+1]='*';
						}
					    if(r!=0 && s[j][r-1]=='.')
						{
					    	s[j][r-1]='*';
						}
					}
				}
			}
		}
	}
	for(j=0;j<n;j++)
	{
		for(r=0;r<n;r++)
		{
			if(s[j][r]=='@')
			{
				count++;
			}
		}
	}
	my_printf("%d",count);
	return 0;
}