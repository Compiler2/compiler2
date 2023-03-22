#define NUM_ITER 44

#include <header.h>


int main_bench()
{
    int i,j,k,p,a[100][100],s[100]={0},m,n;
    my_scanf("%d",&k);
    for(p=1;p<=k;p++)
    {
    	my_scanf("%d%d",&m,&n);
    	for(i=1;i<=m;i++)
    	{
    		for(j=1;j<=n;j++)
    		{
    			my_scanf("%d",&a[i][j]);
    		}
    	}
    	for(j=1;j<=n;j++)
    	{
    		s[p]=s[p]+(a[1][j]);
    	}
    	for(j=1;j<=n;j++)
    	{
    		s[p]=s[p]+(a[m][j]);
    	}
    	for(i=2;i<=m-1;i++)
    	{
    		s[p]=s[p]+a[i][1]+a[i][n];
    	}
    }
    my_printf("%d",s[1]);
    for(p=2;p<=k;p++)
    {
    	my_printf("\n%d",s[p]);
    }
    return 0;
}