#define NUM_ITER 87999

#include <header.h>

int main_bench()
{
	int i,n,k;
	int p=1,q;
	my_scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
		p=p*(n-1);
	for(i=1;;i++)
	{
		q=p*i-k*(n-1);
		if(q>0)break;
	}
	for(i=1;i<=n;i++)
		q=q/(n-1)*n+k;
	my_printf("%d\n",q);
}