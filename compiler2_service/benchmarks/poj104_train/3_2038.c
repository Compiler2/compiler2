#define NUM_ITER 6331

#include <header.h>

int main_bench()
{
	int n,k,a,b,c;
	int z[1000];
	my_scanf("%d",&n);
	my_scanf("%d",&k);
	c=0;
	for(a=0;a<=n-1;a++)
	{
		my_scanf("%d",&z[a]);
	}
    for(a=0;a<=n-1;a++)
	{
		for(b=0;b<=n-1;b++)
		{
			if (z[a]+z[b]==k) c=1;
		}
	}
	if (c==1) my_printf("yes");
	else my_printf("no");
	return 0;
}

