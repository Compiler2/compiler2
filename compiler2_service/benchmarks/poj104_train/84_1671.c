#define NUM_ITER 60940

#include <header.h>

int main_bench()
{
int n,x,y,z,m;
my_scanf("%d",&n);
x=0;y=0;z=0;
for (n=n;n>0;n=n-1)
	{my_scanf("%d",&x);
		if (x>=y)
		{z=y;
		y=x;}
		else
		{y=y;
		if (x>z)
		z=x;
		}
	}
if (n==0) {my_printf("%d\n",y);my_printf("%d",z);}
x=0;y=0;z=0;
return 0;
}