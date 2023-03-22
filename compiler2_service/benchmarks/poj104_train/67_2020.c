#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int p, q;
	my_scanf("%d %d",&p,&q);
	float e = (float)q/p;
	int i = 2;
	while(i<=n)
	{
		int x, y;
		my_scanf("%d %d",&x,&y);
	    float f = (float)y/x;
		if((f-e<=0.05)&&(f-e>=-0.05))
			my_printf("same\n");
		else if(f<e)
			my_printf("worse\n");
		else
			my_printf("better\n");
		i++;
	}
	return 0;
}