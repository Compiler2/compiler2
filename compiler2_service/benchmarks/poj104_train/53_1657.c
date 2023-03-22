#include <header.h>

int main_bench()
{
    int j,k,n,i,m;
    my_scanf("%d",&n);
	m=n;
	int a[300];
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
				{a[k]=a[k+1];}
				n=n-1;
				j=j-1;
			}
		}
	}
	if(n==1)
		my_printf("%d",a[0]);
	else
	{
		my_printf("%d",a[0]);
		for(i=1;i<n;i++)
		{my_printf(",%d",a[i]);}
	}
}