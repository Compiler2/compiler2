#include <header.h>


int main_bench()
{
	int n,a[100000],k,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	my_scanf("%d",&k);
	for(i=0;i<n;)
	{
		if(a[i]==k)
		{
			if(i==n-1)
			{
				n=n-1;
				break;}
			else
			{
				for(j=i;j<n-1;j++)
				{
					a[j]=a[j+1];
				}
				n=n-1;
			}
			continue;
 
		}
		i+=1;
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		my_printf("%d",a[i]);
		else 
		my_printf(" %d",a[i]);
	}
	my_printf("\n");
	return 0;
}