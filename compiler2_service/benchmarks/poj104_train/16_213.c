#include <header.h>

int main_bench()
{
int n,i,c,b;
my_scanf("%d",&n);
if(n==0)my_printf("0");
for(i=1;i<=n;)
{
	i=i*10;
	c=n%i;
	n=n-c;
	b=c*10/i;
	my_printf("%d",b);
}
my_printf("\n");
}
