#include <header.h>

int main_bench()
{
	int n,a,b,c,d;
	my_scanf("%d",&n);
	my_scanf("%d%d",&c,&d);
	double x,y;
	x=(double)d/c;
	int i;
	for(i=0;i<n-1;i++)
	{
		my_scanf("%d%d",&a,&b);
		y=(double)b/a;
		if(y-x>=0.05)
			my_printf("better\n");
		if(x-y>=0.05)
			my_printf("worse\n");
		if(x-y<0.05&&y-x<0.05)
			my_printf("same\n");
	}
	return 0;
}