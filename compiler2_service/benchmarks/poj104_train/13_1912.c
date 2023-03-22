#define NUM_ITER 6075

#include <header.h>

int main_bench()
{
	int count,n,j,i=1;
	int a[20000];
	my_scanf("%d",&n);
	for(i;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
		for(count=0,j=1;j<i;j++)
		{
			if(a[i]==a[j])
				count++;
		}
		if(i==1&&count==0)
			my_printf("%d",a[i]);
		else if(i!=1&&count==0)
			my_printf(" %d",a[i]);
	}
	return 0;
}
