#include <header.h>

int main_bench()
{
	int n;
	int a[20000];
	int i,j;
	int t;
	int l=1;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	if(n==1)
	{
		my_printf("%d",a[0]);
		return 0;
	}
	my_printf("%d",a[0]);
	t=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				t=t-1;
				break;
			}
			
		}
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				break;
			}
			else if(j==i-1&&l<t)
			{	
			
			    my_printf(" %d",a[i]);
			}
		
			
				
			
		}
		
	}


	return 0;
}