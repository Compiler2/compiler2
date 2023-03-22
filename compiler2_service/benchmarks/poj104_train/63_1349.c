#define NUM_ITER 49

#include <header.h>


int main_bench()
{
    int a[200][200],b[200][200],c[200][200];
    int m,n,p,i,j,k,r;
    my_scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    		my_scanf("%d",&a[i][j]);
    	}
    }
    my_scanf("%d%d",&n,&p);
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=p;j++)
    	{
    		my_scanf("%d",&b[i][j]);
    	}
    }
    for(i=1;i<=m;i++)
    {
    	for(j=1;j<=p;j++)
    	{
    		c[i][j]=0;
    		for(k=1;k<=n;k++)
    		{
    			c[i][j]=c[i][j]+a[i][k]*b[k][j];
    		}
    	}
    }
    for(i=1;i<m;i++)
    {
    	for(j=1;j<=p;j++)
    	{
    		if(j!=p) my_printf("%d ",c[i][j]);
    		else my_printf("%d\n",c[i][j]);
    	}
    }
    for(j=1;j<=p;j++)
    {
    	if(j!=p) my_printf("%d ",c[i][j]);
    	else my_printf("%d",c[i][j]);
    }
    return 0;
}