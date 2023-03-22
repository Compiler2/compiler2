#define NUM_ITER 2818

#include <header.h>

int main_bench()
{
	int i,n,m,k;
	float s,a,b;
	my_scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		my_scanf("%d",&n);
		a=1;
		b=1;
		s=0;
		for(k=1;k<=n;k++)
		{
			a=a+b;
			b=a-b;
			s=s+a/b;
		}
		my_printf("%.3lf\n",s);
	}
	
	return 0;
}