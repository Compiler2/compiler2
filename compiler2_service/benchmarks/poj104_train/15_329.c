#include <header.h>

int main_bench()
{
	int a[1000][1000],i,j,c,b,s,n;
    my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			my_scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0&&a[i][j+1]==0&&a[i+1][j]==0&&a[i-1][j]==255&&a[i][j-1]==255)
			{
				c=i;
				b=j;
			}
			if(a[i][j]==0&&a[i][j-1]==0&&a[i-1][j]==0&&a[i+1][j]==255&&a[i][j+1]==255)
			{
		    	c=i-c-1;
				b=j-b-1;
			}
		}
	}
	s=c*b;
	my_printf("%d",s);
}







