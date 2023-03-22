#define NUM_ITER 385470

#include <header.h>

int main_bench()
{
int n,i=0,c,d,e,f;
my_scanf("%d",&n);
if(n==1)
	my_printf("End\n");
else
{
while(i!=1)
{
	if(n%2!=0)
	{
		c=3*n+1;
		d=n;
		n=c;
		my_printf("%d*3+1=%d\n",d,c);
	}
	else
	{
		e=n/2;
		f=n;
		n=e;
		i=e;
		my_printf("%d/2=%d\n",f,e);
	}
}
my_printf("End\n");
}
}