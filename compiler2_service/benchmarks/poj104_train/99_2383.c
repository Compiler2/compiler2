#define NUM_ITER 50830

#include <header.h>


int main_bench()
{
	int n;
	int i;
	int a[100];
	int b=0,c=0,d=0,e=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>=1&&a[i]<=18)
			b++;
		if(a[i]>=19&&a[i]<=35)
			c++;
		if(a[i]>=36&&a[i]<=60)
			d++;
		if(a[i]>=61)
			e++;
	}
	my_printf("1-18: %.2lf%%\n",(double)b/n*100);
	my_printf("19-35: %.2lf%%\n",(double)c/n*100);
	my_printf("36-60: %.2lf%%\n",(double)d/n*100);
	my_printf("60??: %.2lf%%\n",(double)e/n*100);
	return 0;
}