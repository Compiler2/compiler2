#define NUM_ITER 60046

#include <header.h>

int main_bench()
{
	int n,k,i,j,g;
	int a[1000];
	my_scanf("%d%d",&n,&k);
	g=0;
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if((a[i]+a[j])==k)
			{
				g=1;
				break;
			}
		}
		if(g==1) break;
	}
	if(g==1) my_printf("yes");
	else my_printf("no");
	return 0;
}