#define NUM_ITER 29100

#include <header.h>

int main_bench()
{
	int i,n,a,b;
	double c;
	my_scanf("%d",&n);
	my_scanf("%d%d",&a,&b);
	c=1.000000000*b/a;
	for(i=1;i<n;i++)
	{
		my_scanf("%d%d",&a,&b);
		if((1.000000000*b/a-c)>0.05){my_printf("better\n");}
		else if((1.000000000*b/a-c)<-0.05){my_printf("worse\n");}
		else if((1.000000000*b/a-c)>-0.05&&(1.000000000*b/a-c)<0.05){my_printf("same\n");}
	}
	return 0;
}
		