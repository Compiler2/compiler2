#define NUM_ITER 8021

#include <header.h>

int main_bench()
{
	int n,i,a[301],b[301]={0},j,h=1;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
	b[0]=a[0];
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<=i-1;j++)
		{
			if(a[i]==a[j])
			{
				break;
			}
		}
		if(j==i)
		{
			b[h]=a[i];
			h++;
		}
	}
	for(i=0;i<=h-1;i++)
	{
		if(i==0)
			my_printf("%d",b[i]);
		else
			my_printf(",%d",b[i]);
	}
	my_printf("\n");
}
		
	