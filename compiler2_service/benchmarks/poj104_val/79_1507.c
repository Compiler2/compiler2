#define NUM_ITER 23167

#include <header.h>

int main_bench()
{
	int n,m,r,i;
	my_scanf("%d %d",&n,&m);
	while(n&&m)
	{
	if(n>=2)
	{
		for(i=2,r=1;i<=n;i++)
		{
			r=(r+m%i)%i;
			if(r==0)
				r=i;
		}
	}
	else if(n==1)
		r=1;
		my_printf("%d\n",r);
		my_scanf("%d %d",&n,&m);
	}
	return 0;
}