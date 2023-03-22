#include <header.h>

int main_bench()
{
	int n,i,j;
	float a,b;
	int sz[100][2];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			my_scanf("%d",&sz[i][j]);
		}
	}
	a=(float)sz[0][1]/sz[0][0];
	for(i=1;i<n;i++)
	{
		b=(float)sz[i][1]/sz[i][0];
		if(a-b>0.05)
		{
			my_printf("worse\n");
			continue;
		}
		if(b-a>0.05)
		{
			my_printf("better\n");
			continue;
		}
		else
		{
			my_printf("same\n");
			continue;
		}
	}
	return 0;
}