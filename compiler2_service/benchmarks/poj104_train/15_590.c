#include <header.h>

int main_bench()
{
	int sum[1000][1000];
	int n,i,j,s=0,t=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&sum[i][j]);
		}

	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sum[i][j]==0)
			{
				s++;
				
			}
					
		}
		if(s>2)
		{
			break;
		}
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(sum[i][j]==0)
			{
				t++;
				
			}
					
		}
		if(t>2)
		{
			break;
		}
	}
	my_printf("%d",s*t-(2*s+2*t-4));	

	
return 0;
}
