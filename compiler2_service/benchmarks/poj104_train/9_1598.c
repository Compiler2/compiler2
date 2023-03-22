#include <header.h>

int main_bench()
{
	int n,a[100],i,num=0,m[100],j;
	char c[100][10];
	
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",c[i]);
		my_scanf("%d",&a[i]);
	}
	
	
	
	for(i=0;i<n;i++)
	{
		if(a[i]>=60)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]>=a[j])
				{
					num=num+1;
				}	
			}
			m[i]=num;
			num=0;
		}
	}
	
	for(j=n;j>0;j--)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>=60)
			{
				if(m[i]==j)
				{
					my_printf("%s\n",c[i]);
				}
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]<60)
		{
			my_printf("%s\n",c[i]);
		}
	}

	return 0;
}