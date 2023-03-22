#include <header.h>

int main_bench()
{
	int i,j,k=0;
	int n;
	int m;
	my_scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	my_scanf("%d",&m);
	for(i=0;i<n;)
	{
		if(a[i]==m)
		{
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
			k++;
		}
		else
		    i++;
		
	}
	for(i=0;i<n-k-1;i++)
	{
		my_printf("%d ",a[i]);
	} 
	my_printf("%d",a[n-k-1]);
	return 0;
}