#include <header.h>

int main_bench()
{
	int i,j,k,n,m,a=0,b=0,c=0,d=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			my_scanf("%d",&k);
			if(k==0)
			{
				c=i;
				d=j;
				if(a==0&&b==0)
				{
					a=i;
					b=j;
				}
			}
		}
	}
	m=(c-a-1)*(d-b-1);
	my_printf("%d\n",m);
	return 0;
}


