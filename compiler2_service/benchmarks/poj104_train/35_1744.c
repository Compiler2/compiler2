#include <header.h>


int main_bench()
{
	int i,j,n,m,s,sz[100][100],a,b,max=0,min=100,t=0;
	my_scanf("%d,",&n);
	my_scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			my_scanf("%d",&(sz[i][j]));
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(sz[i][j]>max)
			{
				max=sz[i][j];
				a=i;
				b=j;
			}
		}
		for(s=0;s<n;s++)
		{
			if((sz[s][b])<min)
			{
				min=sz[s][b];
			}
		}
		if(min==sz[a][b])
		{   t=1;
			my_printf("%d+%d",a,b);
	
		}
	}
		if(t==0)
		{
			my_printf("No\n");
		}
		return 0;
}