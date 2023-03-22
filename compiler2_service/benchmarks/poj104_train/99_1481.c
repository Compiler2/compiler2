#define NUM_ITER 54671

#include <header.h>

int main_bench()
{
	int n,i,x,a=0,b=0,c=0,d=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&x);
		if(x<=18){
			a++;
		}
		else if(x>=19&&x<=35){
			b++;
		}
		else if(x>=36&&x<=60){
			c++;
		}
		else if(x>=61){
			d++;
		}
	}
	my_printf("1-18: %.2lf%%\n",(double)100*a/n);
    my_printf("19-35: %.2lf%%\n",(double)100*b/n);
    my_printf("36-60: %.2lf%%\n",(double)100*c/n);
    my_printf("60??: %.2lf%%\n",(double)100*d/n);
    return 0;

}

