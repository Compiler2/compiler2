#define NUM_ITER 6116

#include <header.h>

int main_bench()
{
	int n,i,j;
	my_scanf("%d",&n);
	int a[300],b[300];
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		if(i==0)
		{
			my_printf("%d",a[i]);
		}
		b[i]=1;
		for(j=0;j<i;j++)
		{
			if(a[i]!=a[j]&&b[i]==1)
			{
				b[i]=1;
			}
			else
			{
				b[i]=0;
			}
		}
	}
	for(i=1;i<n;i++)
	{
		if(b[i])
		{
			my_printf(",%d",a[i]);
		}
	}
	return 0;
}