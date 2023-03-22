#define NUM_ITER 27862

#include <header.h>

int main_bench()
{
	int n,i,j,k,a,b,x,y;
	double l,z;
	my_scanf("%d",&n);
	my_scanf("%d%d",&x,&y);
	l=1.0*y/x;
	for(i=0;i<n-1;i++)
	{
		my_scanf("%d%d",&a,&b);
		z=1.0*b/a;
		if(z>l&&z-l>=0.05)
		{
			my_printf("better\n");
		}
		else if(z<l&&l-z>=0.05)
		{
			my_printf("worse\n");
		}
		else{my_printf("same\n");}

	}
	return 0;

}