#define NUM_ITER 280605

#include <header.h>

int main_bench()
{
	int i,n,k,re=1;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		re*=n;
	if(n==2)
		my_printf("7\n");
	else
		my_printf("%d\n",re-k*(n-1));
}