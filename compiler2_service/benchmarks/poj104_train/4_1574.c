#include <header.h>

int main_bench()
{
	int a[100][100],i,j,p,m,n;
	my_scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	for(p=0;p<=m+n-2;p++)
	{   
		for(i=0;i<=p;i++)
		{
			if(i<m&&p-i<n)
				my_printf("%d\n",a[i][p-i]);
			else continue;
		}
	}
	return 0;
}

			
