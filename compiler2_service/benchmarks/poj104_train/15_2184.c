#define NUM_ITER 548

#include <header.h>

int main_bench()
{
    int a[1001][1001];
    int n,i,j,k,s=0;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    		my_scanf("%d",&a[i][j]);
    	}
    }
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n-2;j++)
    	{
    		if(a[i][j]==0)
    		{
    			for(k=j+1;k<=n;k++)
    			{
    				if(a[i][k]==0)
    				{
    					s=s+(k-j-1);
    					break;
    				}
    			}
    		}
    	}
    }
    my_printf("%d",s);
    return 0;
}