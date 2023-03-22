#define NUM_ITER 6196

#include <header.h>

int main_bench()
{
	int n,i,j;
	my_scanf("%d",&n);
	int a[301],b[301];
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		b[i]=1;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{b[j]=0;}
		}
	}
	my_printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		if(b[i]==1)
		{
			my_printf(",%d",a[i]);
		}
	}
	my_printf("\n");
	return 0;
}
