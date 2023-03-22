#define NUM_ITER 55188

#include <header.h>

int main_bench()
{
	int n,i;
	int a[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	int w,x,y,z;
	w=0;
	x=0;
	y=0;
	z=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<=18){
			w++;
		}
		else if(a[i]>18&&a[i]<=35){
			x++;
		}
		else if(a[i]>35&&a[i]<=60){
			y++;
		}
		else{
			z++;
		}
	}
	double b,c,d,e;
	b=(double)w/n*100;
	c=(double)x/n*100;
	d=(double)y/n*100;
	e=(double)z/n*100;
	my_printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",b,c,d,e);
	return 0;
}