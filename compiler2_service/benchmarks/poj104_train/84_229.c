#include <header.h>

int main_bench()
{
	int max,min,n,x,y;
	min=100;max=1;
	my_scanf("%d",&n);
	if(n==n)
	{
		my_scanf("%d",&x);
		max=min=x;
	}
	n=n-1;
	if(n==n)
	{
		my_scanf("%d",&x);
		max=max>x?max:x;
		min=min<x?min:x;
	}
	n=n-1;
	for(n=n;n>0;n--)
	{
		my_scanf("%d",&x);
		if(max==x)
			max=x;min=min;
		if(max!=x)
		{
			y=max<x?max:x;
			max=max>x?max:x;
			min=min>y?min:y;
		}
	}
	my_printf("%d\n%d",max,min);
}