#define NUM_ITER 1509399

#include <header.h>

int main_bench()
{
	int n,a,b,c,d;
my_scanf("%d",&n);
a=n%10;
n=n/10;
if(n==0)
{
	my_printf("%d",a);
}
else
{
	b=n%10;
	n=n/10;
	if(n==0)
{
	my_printf("%d%d",a,b);
}
else
{
	c=n%10;
n=n/10;
d=n;
if(n==0)
{
	my_printf("%d%d%d",a,b,c);
}
else
{
my_printf("%d%d%d%d",a,b,c,d);
}
}
}
return 0;
}