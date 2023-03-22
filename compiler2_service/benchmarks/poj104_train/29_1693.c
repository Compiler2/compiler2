#define NUM_ITER 3019

#include <header.h>

int main_bench()
{
	int m,i,n,k;
	float s=0,j;
	my_scanf("%d",&m);
		for(i=1;i<=m;i++)
		{
			my_scanf("%d",&n);
		j=2;
		s=0;
		for(k=1;k<=n;k++)
		{
			s=s+j;
		j=1+1/j;
		}
		my_printf("%.3f\n",s);
		}
}


