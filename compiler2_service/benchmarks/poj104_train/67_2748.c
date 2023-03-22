#define NUM_ITER 26612

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int m,l;
	my_scanf("%d %d",&m,&l);
	float eff=(float)l/(float)m;
	for(int i=1;i<n;i++)
	    {
		int o,p;
		my_scanf("%d %d",&o,&p);
		float exp=(float)p/(float)o;
		if(exp-eff>0.05)
		   my_printf("better\n");
		else
		   if(exp-eff<-0.05)
		      my_printf("worse\n");
		else
		   my_printf("same\n");
		}
}