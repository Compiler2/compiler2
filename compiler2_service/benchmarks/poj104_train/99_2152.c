#define NUM_ITER 57848

#include <header.h>

int main_bench()
{
	int n,b=0,c=0,d=0,e=0,a,i;
	my_scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a);
		if(a<=18)
			b=b+1;
		else if(a<=35)
			c=c+1;
		else if(a<=60)
			d=d+1;
		else
			e=e+1;
	}
	my_printf("1-18: %.2lf%%\n",(double)b/n*100);
	my_printf("19-35: %.2lf%%\n",(double)c/n*100);
	my_printf("36-60: %.2lf%%\n",(double)d/n*100);
	my_printf("60??: %.2lf%%",(double)e/n*100);
	return 0;
}