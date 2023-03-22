#define NUM_ITER 55865

#include <header.h>

int main_bench()
{
	int n,a[100],x,y,m=0,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
    x=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>x)
		{	x=a[i];
		    m=i;
		}
	}
    if(m==0)
	{
		y=a[1];
		for(i=2;i<n;i++)
		{
			if(a[i]>y)
				y=a[i];
		}
	}
	else
	{
		y=a[0];
		for(i=1;i<n;i++)
		{
			if(i==m)
				continue;
			else
			{
				if(a[i]>y)
					y=a[i];
			}
		}
	}
	my_printf("%d\n%d",x,y);
	return 0;
}
