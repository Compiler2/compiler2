#define NUM_ITER 58397

#include <header.h>

int main_bench()
{
	int n,i,x;
	double a,b,c,d;
	i=1;
	a=0;
	b=0;
	c=0;
	d=0;
	my_scanf("%d",&n);
	while(i<=n){
		my_scanf("%d",&x);
		if(x<=18){
			a=a+1;
		}else if(x<=35){
			b=b+1;
		}else if(x<=60){
			c=c+1;
		}else{
			d=d+1;
		}
		i=i+1;
	}
	a=100*a/n;
	b=100*b/n;
	c=100*c/n;
	d=100*d/n;
	my_printf("1-18: %.2lf%%\n",a);
    my_printf("19-35: %.2lf%%\n",b);
	my_printf("36-60: %.2lf%%\n",c);
	my_printf("60??: %.2lf%%\n",d);
	return 0;
}


