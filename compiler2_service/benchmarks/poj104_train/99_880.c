#define NUM_ITER 52463

#include <header.h>

int main_bench()
{
	int n,age,a=0,b=0,c=0,d=0,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&age);
		if(age>=0&&age<=18)
			a++;
		if(age>=19&&age<=35)
			b++;
		if(age>=36&&age<=60)
			c++;
		if(age>=61)
			d++;
	}
	my_printf("1-18: %.2lf%%\n",100.0*a/n);
	my_printf("19-35: %.2lf%%\n",100.0*b/n);
	my_printf("36-60: %.2lf%%\n",100.0*c/n);
	my_printf("60??: %.2lf%%\n",100.0*d/n);
	return 0;
}