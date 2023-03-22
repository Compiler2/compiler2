#define NUM_ITER 7441

#include <header.h>

int main_bench()
{
	int sz[1001];
	int js[1001];
	int n,i,k,a,b;
	b=0;
	my_scanf("%d",&n);
	my_scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&(sz[i]));
	}
	for(i=0;i<n;i++)
	{
		if(i!=n-1)
		{
		for(a=i+1;a<n;a++)
		{
			if(sz[i]+sz[a]==k)
			{
				b=b-1000000;
				break;
			}
			b=b+1;
		}
		}
	}
	if(b==(n*(n-1))/2)
		my_printf("no");
	else
		my_printf("yes");
	return 0;
}
