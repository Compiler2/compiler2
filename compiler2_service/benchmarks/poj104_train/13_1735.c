#define NUM_ITER 8000

#include <header.h>

int main_bench()
{
	int k,i,j,n,m;
	my_scanf("%d",&k);
	char c[20000];
	for (i=1;i<=k;i++)
	{
		my_scanf("%d",&c[i]);
	}
	my_printf("%d",c[1]);
	for (n=2;n<=k;n++)
	{
	    for (j=1;j<=n-1;j++)
		{
		     if (c[n]==c[j])
			     break;
		}
        if (j==n&&c[n]!=c[n-1])
		{	my_printf(" ");
	    	my_printf("%d",c[n]);
		}
	}
    return 0;
}