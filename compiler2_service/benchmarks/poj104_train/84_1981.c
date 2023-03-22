#include <header.h>


int main_bench()
{
	int n,i,p,x,y;
	x=y=0;
	my_scanf("%d",&n);
	for (i=1;i<=n;i++)
		{my_scanf("%d",&p);
		if (p>x ){
			y=x;
			x=p;}
		else 
			if(p>y)
				y=p;
				}
	my_printf("%d\n%d",x,y);
	return 0;
}
