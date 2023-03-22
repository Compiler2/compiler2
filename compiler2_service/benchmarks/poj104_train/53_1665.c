#define NUM_ITER 10785

#include <header.h>

int main_bench()
{
	int i,j;
	int n,a[300],b[300]={0};
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
		b[i]=1;
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]==a[j]) b[j]=0;
		}
	}
	for(i=1;i<=n;i++)
	{
		if(b[i]==1)
		{ 
			my_printf("%d",a[i]);
			break;
		}
	}
	for(i=i+1;i<=n;i++)
	{
		if(b[i]==1)
			my_printf(",%d",a[i]);
	}
	return 0;
}
