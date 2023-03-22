#include <header.h>

int main_bench()
{
	int n,Z[1000],x,y;
	my_scanf("%d",&n);
for (x=1;x<=n;x++)
my_scanf("%d",&Z[x]);
for (x=1;x<n;x++)
{
	if (Z[x]<Z[x+1])
		Z[x+1]=Z[x+1];
	else
	{
		y=Z[x+1];
		Z[x+1]=Z[x];
		Z[x]=y;
	}
}
for (x=1;x<n-1;x++)
{
	if (Z[x]<Z[x+1])
		Z[x+1]=Z[x+1];
	else
	{
		y=Z[x+1];
		Z[x+1]=Z[x];
		Z[x]=y;
	}

}
my_printf("%d\n%d\n",Z[n],Z[n-1]);
return 0;
}

