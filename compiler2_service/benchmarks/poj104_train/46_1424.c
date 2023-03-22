#include <header.h>

int main_bench()
{
	int n,a[100][100]={0},j,m,i,k,p;
	my_scanf("%d %d",&n,&m);
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
		my_scanf("%d",&a[j][i]);
		}
	}
	if(m>n)
	{
		k=n;
	}
	else
	{
		k=m;
	}
		
			for(i=0;i<(k-1)/2;i++)
			{
	
		for(j=i;j<m-i;j++)
		{
			my_printf("%d\n",a[i][j]);
		}
		for(j=i+1;j<n-i;j++)
		{
			my_printf("%d\n",a[j][m-i-1]);
		}
		for(j=m-i-2;j>=i;j--)
		{
			my_printf("%d\n",a[n-1-i][j]);
		}
		for(j=n-i-2;j>i;j--)
		{
			my_printf("%d\n",a[j][i]);
		}
			}
			if(k%2==0)
			{
				i=(k-1)/2;
			for(j=i;j<m-i;j++)
		{
			my_printf("%d\n",a[i][j]);
		}
		for(j=i+1;j<n-i;j++)
		{
			my_printf("%d\n",a[j][m-i-1]);
		}
		for(j=m-i-2;j>=i;j--)
		{
			my_printf("%d\n",a[n-1-i][j]);
		}
		for(j=n-i-2;j>i;j--)
		{
			my_printf("%d\n",a[j][i]);
		}
			}
			else
			{
				if(m>n)
				{
					i=(n-1)/2;
					for(j=i;j<m-i;j++)
		{
			my_printf("%d\n",a[i][j]);
		}
				}
				else
				{
					i=(m-1)/2;
					for(j=i;j<n-i;j++)
		{
			my_printf("%d\n",a[j][m-i-1]);
		}
				}
			}
			return 0;
}

