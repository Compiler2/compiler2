#include <header.h>

int main_bench()
{
	int a[300],b[1000]={0};
	int n,i,j;
	j=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(b[a[i]]==0)
		{
			b[a[i]]=1;
		}
		else
		{
			a[i]=10000;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=10000)
		{
			j++;
			if(j==1)
			{
				my_printf("%d",a[i]);
			}
			else
			{
				my_printf(",%d",a[i]);
			}
		}
	}
	return 0;
}

