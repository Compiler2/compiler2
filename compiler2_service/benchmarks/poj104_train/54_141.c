#define NUM_ITER 276056

#include <header.h>

int main_bench()
{
	int m=1,n,k,s=1,t,i;
	my_scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	{
		m=m*n;
		s=s*(n-1);
	}
	t=(n-1)*k/s+1;
	m=t*m-(n-1)*k;
	my_printf("%d",m);
}