#define NUM_ITER 21772

#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	double a,b,c;
	my_scanf("%lf%lf",&a,&b);
	c=b/a;
	for(i=0;i<n-1;i++){
		double j,k,l;
		my_scanf("%lf%lf",&j,&k);
		l=k/j;
		if(c-l>0.05)
			my_printf("worse\n");
		if(c-l<-0.05)
			my_printf("better\n");
		if(c-l<0.05&&c-l>-0.05)
			my_printf("same\n");
	}
	return 0;
}