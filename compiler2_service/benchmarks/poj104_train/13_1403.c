#include <header.h>

int main_bench()
{

	int a[20000],i,n,k,j,m;
	my_scanf("%d",&n);m=n;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(k=0;k<i;k++)
		{
			if(a[i]==a[k])
			{
		
			n--;
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}i--;
			}
		}
		
	}
	for(i=0;i<n;i++)
    if(i<n-1)
	{my_printf("%d ",a[i]);}
	else {my_printf("%d",a[n-1]);}
	return 0;
}
