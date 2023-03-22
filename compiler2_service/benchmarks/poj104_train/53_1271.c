#include <header.h>

int main_bench()
{
	int n,i,j,a[300],b[300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
	    b[j]=0;
	}
	for(i=0;i<n;i++)
	{
		int m=a[i];
		for(j=i+1;j<n;j++)
		{
			if(m==a[j])
			{
				b[j]=1;
			}
		}
	}
    my_printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		if(b[i]==0)
		{
			my_printf(",%d",a[i]);
		}
	}
	return 0;
}
