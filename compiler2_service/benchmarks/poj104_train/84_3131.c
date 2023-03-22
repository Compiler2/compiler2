#define NUM_ITER 64437

#include <header.h>

int main_bench()
{
	int n,i,a,b,max,sub,temp;
	my_scanf("%d %d",&n,&a);
max=a;sub=a;
for(i=1;i<=(n-1);i++)
{	
	my_scanf("%d",&b);
	if(max<b)
	{temp=max;max=b;sub=temp;}
	if(sub<b&&b<max)
		sub=b;}
	my_printf("%d\n%d",max,sub);
}
