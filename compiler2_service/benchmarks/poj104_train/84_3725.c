#define NUM_ITER 60940

#include <header.h>

int main_bench()
{
int n,i,a,b,x,max,cmax;
my_scanf("%d%d%d",&n,&a,&b);
if(a>=b)
{max=a;
cmax=b;}
else
{max=b;
cmax=a;}
i=1;
while(i<=n-2)
{
	my_scanf("%d",&x);
	i=i+1;
	if(x>=cmax&&x>=max)
	{cmax=max;
	max=x;}
	
else
	if(x<=cmax&&x<=max)
	{max=max;
	cmax=cmax;}
	else
	{cmax=x;
	max=max;}
}
my_printf("%d\n%d\n",max,cmax);
return 0;
}
