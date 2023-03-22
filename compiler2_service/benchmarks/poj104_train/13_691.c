#define NUM_ITER 8096

#include <header.h>

int main_bench()
{
	int n,a[20000];
	my_scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	my_printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				break;
		}
		if(j==i)
			my_printf(" %d",a[i]);
	}
	return 0;
}