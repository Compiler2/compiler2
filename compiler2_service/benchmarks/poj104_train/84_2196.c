#include <header.h>

int main_bench()
{
	int a;
	my_scanf("%d",&a);
	int i,b,t,x,y;
	for(i=1;i<=a;i++)
	{
		my_scanf("\n%d",&b);
		if(b>=t)
		{	
			x=t;
			t=b;
		}
		else
		{	
			if(b>=x)
		    x=b;
		}
	}
	my_printf("%d\n%d",t,x);
	return 0;
}
