#define NUM_ITER 54576

#include <header.h>

int main_bench()
{
	int i,n,a[100];
	float x=0,y=0,z=0,m=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
	{
		if(a[i]<=18)
			x++;
		if(a[i]>=19&&a[i]<=35)
			y++;
		if(a[i]>=36&&a[i]<=60)
			z++;
		if(a[i]>60)
			m++;
	}
	x=x*1.0/n*100;
	y=y*1.0/n*100;
	z=z*1.0/n*100;
	m=m*1.0/n*100;
	my_printf("1-18: %.2f%%\n",x);
	my_printf("19-35: %.2f%%\n",y);
	my_printf("36-60: %.2f%%\n",z);
	my_printf("60??: %.2f%%\n",m);



	return 0;
}

