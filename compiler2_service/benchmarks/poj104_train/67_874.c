#define NUM_ITER 30474

#include <header.h>

int main_bench()
{
	int n,i;
	float a[100],b[100],c[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%f%f",&a[i],&b[i]);
	c[0]=b[0]/a[0];
	for(i=1;i<n;i++)
	{
		c[i]=b[i]/a[i];
		if(c[i]-c[0]>0.05)
			my_printf("better\n");
		else if(c[0]-c[i]>0.05)
			my_printf("worse\n");
		else
			my_printf("same\n");
	}
	return 0;
}