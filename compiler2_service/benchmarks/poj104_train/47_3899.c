#include <header.h>

int main_bench()
{
	int n,i,j,t;
    int b[100];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d",&b[i]);
	}
	if(n%2==0)
	{
        for (j=n-1,i=0;i<(n/2);i++,j--)
		{
                      t=b[i];
		  b[i]=b[j];
		  b[j]=t;
		}
	}
    if(n%2!=0)
	{
        for (j=n-1,i=0;i<((n-1)/2);i++,j--)
		{
                      t=b[i];
		  b[i]=b[j];
		  b[j]=t;
		}
	}
	for (i=0;i<(n-1);i++)
	{
		my_printf("%d ",b[i]);
	}	
         my_printf("%d",b[n-1]);
	return 0;
}
