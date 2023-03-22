#define NUM_ITER 52685

#include <header.h>

int main_bench()
{
	int n,i,a[10000],x,y,z,t;
	my_scanf("%d\n",&n);
	for (i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	x=a[1];y=a[2];
	if(x<y) {x=a[2];y=a[1];}
	for (i=3;i<=n;i++)
	{
		z=a[i];
		if(z>y)
		{
			y=z;
			if(y>x)
			{
				t=x;
				x=y;
				y=t;
			}
		}
	}
	my_printf("%d\n%d",x,y);

}