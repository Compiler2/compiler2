#include <header.h>

int main_bench()
{
	int a[1000][1000];
	int n,b,c,d,e,i,j,s;
	my_scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=n;i++)
		{
			my_scanf("%d",&a[i][j]);
			if((a[i][j]==0) && (a[i-1][j]!=0) && (a[i][j-1]!=0))
			{
				b=i;
				c=j;
			}
			else if((a[i][j]==0) && (a[i-1][j]==0) && (a[i][j-1]==0))
			{
				d=i;
				e=j;
			}
		}
	}
	s=(d-b-1)*(e-c-1);
	my_printf("%d\n",s);
	return 0;
}

