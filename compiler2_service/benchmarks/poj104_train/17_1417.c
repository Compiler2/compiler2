#include <header.h>

char s[1000];
int dp[1000];
int main_bench()
{
	
	int i,j,k,n;
	my_scanf("%d",&n); 
	while(my_scanf("%s",s)==1)
	{
		memset(dp,0,sizeof(dp));
		n=strlen(s);
		for(i=0;i<n;i++)
		{
			if(s[i]=='(')
			    dp[i]=-1;
			if(s[i]==')')
			    dp[i]=1;
		}
		for(i=0;i<n;i++)
		{
			if(s[i]==')')
			{
				for(j=i-1;j>=0;j--)
				{
					if(s[j]=='('&&dp[j]==-1)
					{
						dp[i]=0;
						dp[j]=0;
						break;
					}
				}
			}
		}
		my_printf("%s\n",s);
		for(i=0;i<n;i++)
		{
			if(dp[i]==-1)
			    my_printf("$");
			else if(dp[i]==1)
			    my_printf("?");
			else
			my_printf(" ");
		}
		my_printf("\n");
	}
	return 0;
}