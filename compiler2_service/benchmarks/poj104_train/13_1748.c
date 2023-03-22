#define NUM_ITER 6304

#include <header.h>

int main_bench()
{
    int a[20000];
	int i,j,n,k;
    k=0;
    my_scanf("%d",&n);
	
	n=n-1;
	for(i=0;i<=n;i++)
	   my_scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{
	  for(j=i+1;j<=n;j++)
		  if(a[j]==a[i]) a[j]=0;
	}
    
    my_printf("%d",a[0]);
	    for(i=1;i<=n;i++)
		{
			if(a[i]!=0) 
			{
			   my_printf(" %d",a[i]);
			}
		}

	return 0;
}