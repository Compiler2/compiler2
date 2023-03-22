#define NUM_ITER 2219

#include <header.h>

int main_bench()
{
	int m,i=1,n,t,x;
	double s,j,r;
	my_scanf("%d",&m);
	while(i<=m)
	{
		my_scanf("%d",&n);
		for(j=1,r=2,t=1,s=0;t<=n;t++)
		{
            s=s+r/j;
			x=j+r;
			j=r;
			r=x;
		}
		my_printf("%.3lf\n",s);
                  i=i+1;
	}
		return 0;
	}


