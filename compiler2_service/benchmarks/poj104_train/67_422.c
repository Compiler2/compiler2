#include <header.h>

int main_bench()
{
	double n,a,b,c,d,m;
	my_scanf("%lf%lf%lf\n",&n,&a,&b);
	m=b/a;
	while(n>1){
		my_scanf("%lf%lf\n",&c,&d);
		a=m-d/c;
		if(a>0.05)
			my_printf("worse\n");
		if(a<-0.05)
			my_printf("better\n");
		if(a<=0.05&&a>=-0.05)
			my_printf("same\n");
		n=n-1;
	}
	return 0;
}