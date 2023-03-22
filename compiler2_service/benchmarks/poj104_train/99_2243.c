#define NUM_ITER 53722

#include <header.h>

int main_bench()
{
	int i=1,n,k,a=0,b=0,c=0,d=0;
	my_scanf("%d",&n);
	while(i<=n)
	{
		my_scanf("%d",&k);
		if(k>=1&&k<=18)
			a++;
		if(k>=19&&k<=35)
			b++;
		if(k>=36&&k<=60)
			c++;
		if(k>=61)
			d++;
		i++;
	}
    my_printf("1-18: %.2lf%%\n",(double)a*100/(double)n);
	my_printf("19-35: %.2lf%%\n",(double)b*100/(double)n);
	my_printf("36-60: %.2lf%%\n",(double)c*100/(double)n);
	my_printf("60??: %.2lf%%\n",(double)d*100/(double)n);
}