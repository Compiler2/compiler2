#include <header.h>

int main_bench()
{
	int a[1000][1000],i,n,j,b,c,d,e,x;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				b=i;
				c=j;
				j=n;
				i=n;
			}
		}
	
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=n-1;j>=0;j--)
		{
			if(a[i][j]==0)
			{
				d=i;
				e=j;
				i=-1;
				j=-1;
			}
		}
	}
	x=(d-b+1)*(e-c+1)-2*(d-b+1)-2*(e-c+1)+4;
	my_printf("%d",x);
	return 0;
}

