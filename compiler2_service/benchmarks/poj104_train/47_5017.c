#include <header.h>




int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int sz[99],zs[99];
	for(int i=0;i<n;i++)
	{
		my_scanf("%d",&(sz[i]));
		zs[n-i-1]=sz[i];
	}
	for(int j=0;j<(n-1);j++)
	{
		my_printf("%d ",(zs[j]));
	}
	my_printf("%d",(zs[n-1]));
	return 0;
}
