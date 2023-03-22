#include <header.h>

int main_bench()
{
	int a[300],j,n,max,i;
	int b[300]={-1};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
				a[j]=0;
		}
	}
	for(i=n-1;i>=0;i--)
	{
		if(a[i]!=0)
		{
			max=i;
		    break;
		}
	}
	for(i=0;i<n&&i!=max;i++)
	{
		if(a[i]!=0)
		{
          my_printf("%d,",a[i]);
		}
	}
    my_printf("%d",a[max]);
}