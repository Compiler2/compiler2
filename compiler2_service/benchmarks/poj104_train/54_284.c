#define NUM_ITER 669755

#include <header.h>

int main_bench()
{
	int m=1,n,k,s,t=1;
	my_scanf("%d %d",&n,&k);
	if(n==2)
		s=4+3*k;
	else
	{do
	{
	  t=n*t;
	  m++;
	}while(m<=n);
	s=t-k*(n-1);
	}
	my_printf("%d\n",s);
}
