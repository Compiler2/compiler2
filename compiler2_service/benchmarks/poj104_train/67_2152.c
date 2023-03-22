#define NUM_ITER 25897

#include <header.h>

int main_bench()
{
	int i,n,zong,hao;
	double x0,x;

	my_scanf(" %d",&n);
	my_scanf(" %d %d",&zong,&hao);
	x0=hao/(zong*1.0);

	for(i=0;i<n-1;i++)
	{
		my_scanf(" %d %d",&zong,&hao);
		x=hao/(zong*1.0);
		if(x-x0>0.05) my_printf("better\n");
		else if(x0-x>0.05) my_printf("worse\n");
		else my_printf("same\n");
	}
	
	return 0;
}