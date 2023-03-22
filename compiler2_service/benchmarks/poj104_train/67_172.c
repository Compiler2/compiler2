#define NUM_ITER 21980

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d" , &n);
	float sz[100][2];
	float q[100];

	int i,k;

	for(i=0;i<n;i++)
	{
		for(k=0;k<2;k++)
		{
			my_scanf("%f" , &sz[i][k]);
		}
		q[i]=0;
		q[i] = sz[i][1] / sz[i][0];
	}
	for(i=1;i<n;i++)
	{
		if(q[0]-q[i]>0.05f)
		{
			my_printf("worse\n");
		}
		if(q[i]-q[0]>0.05f)
		{
			my_printf("better\n");
		}
		if((q[0]-q[i]<=0.05f)&&(q[i]-q[0]<=0.05f))
		{
			my_printf("same\n");
		}
	}
	return 0;
}

