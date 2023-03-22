#define NUM_ITER 277900

#include <header.h>

int main_bench()
{
	int i,n,k,m=1;
	my_scanf("%d %d",&n,&k);
	if(n==2)m=3*k+4;
	else {for(i=1;i<=n;i++)m=m*n;
	m=m-(n-1)*k;}
	my_printf("%d",m);
}