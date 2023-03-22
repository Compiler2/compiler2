#define NUM_ITER 30536

#include <header.h>

int main_bench()
{
	int i,num,n[100],m[100];
	float w[100];
	my_scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		my_scanf("%d%d",&n[i],&m[i]);
	}
	w[0]=(float)m[0]/n[0];
	for(i=1;i<num;i++)
	{
		w[i]=(float)m[i]/n[i];
		if(w[i]-w[0]>0.05)
		{
			my_printf("better\n");
		}
		if(w[0]-w[i]>0.05)
		{
			my_printf("worse\n");
		}
		if(w[0]-w[i]<=0.05 && w[i]-w[0]<=0.05)
		{
			my_printf("same\n");
		}
	}
	return 0;
}
