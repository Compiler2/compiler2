#define NUM_ITER 6173

#include <header.h>

int a[999];
int main_bench()
{
	int n,k,i,j;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<=n-1;i++)
	{my_scanf("%d",&a[i]);}
	int b=0;
	for(i=0;i<=n-2;i++)
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]+a[j]==k)
			{
				b=b+1;
			}
		}
		if(b>=1)
		{
			my_printf("yes\n");
		}
		else my_printf("no\n");
}