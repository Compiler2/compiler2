#include <header.h>

int main_bench()
{
	int a[100];
	int n,i,j,k,s=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
      my_scanf("%d",&a[i]);
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			
				k=a[i];
				a[i]=a[i+1];
				a[i+1]=k;
			

		}
	}
	for(i=0;i<n;i++)
	{
		if(s==0)
		{
           my_printf("%d",a[i]);
		   s=1;
		}
		else
			my_printf(" %d",a[i]);
	}
		return 0;
}

