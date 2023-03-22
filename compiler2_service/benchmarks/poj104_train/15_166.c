#include <header.h>

int main_bench()
{
	int a[100][100]={2};
	int i,j,n,n1=-1,n2=-1,n3,n4;
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
				n3=i;
				n4=j;
				if(n1>=0 || n2>=0)
					continue;
				else 
				{
					n1=i;
					n2=j;
				}
			}
		}
	}

	my_printf("%d",(n3-n1-1)*(n4-n2-1));
	return 0;
}

