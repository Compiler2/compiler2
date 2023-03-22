#define NUM_ITER 10263

#include <header.h>

int main_bench()
{
	int n,i,t,s,r;
	int a[20000];
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
	my_printf("%d",a[0]);
	for(t=1;t<=n-1;t++)
	{
		r=0;
		for(s=0;s<=t-1;s++)
		{
			if(a[t]==a[s])
				break;
			else
				r++;
		}
		if(r==t)
			my_printf(" %d",a[t]);
	}
	return 0;
}
