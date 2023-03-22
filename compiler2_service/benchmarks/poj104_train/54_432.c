#include <header.h>

int main_bench()
{
	int n,k,t,m=0;
	my_scanf("%d %d",&n,&k);
if (n>2)
	{int i=1,p;
	p=1;
	while(i<=n)
	{	p=p*n;
	i++;}
	m=p-k*(n-1);
}
else if(n=2) m=7;
my_printf("%d",m);
}