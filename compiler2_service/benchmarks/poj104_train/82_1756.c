#include <header.h>

int main_bench()
{
	int n,a,b,p,c;
         int d=0;
	int i=0;
	int max(int x,int y);
	my_scanf("%d",&n);
	for(p=1;p<=n;p++)
	{
		my_scanf("%d %d ",&a,&b);
		if(90<=a&a<=140)
		{
			if(60<=b&b<=90)
			{
				i=i+1;
			}
			else
			{
				i=0;
			}
		}
		else
		{
			i=0;
		}
		c=i;
		d=max_int(d,c);
	}
	my_printf ("%d\n",d);
	return 0;
}
int max_int(int x,int y)
{
	int z;
	if(x>y)
	{
		z=x;
	}
	else
	{
		z=y;
	}
	return(z);
}