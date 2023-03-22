#include <header.h>

int main_bench()
{
	int n,i,a[100],b[100];
	double c,d;
	my_scanf("%d",&n);
	my_scanf("%d %d",&a[0],&b[0]);
	c=(double)b[0]/a[0];
	for(i=1;i<n;i++)
	{
        my_scanf("%d %d",&a[i],&b[i]);
		d=(double)b[i]/a[i];
		if(d>(c+0.05))
		{
			my_printf("better\n");
		}
		if(d<(c-0.05))
		{
			my_printf("worse\n");
		}
		if(d<=(c+0.05)&&d>(c-0.05))
		{
			my_printf("same\n");
		}
	}
	return 0;
}

		
