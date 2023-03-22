#define NUM_ITER 971508

#include <header.h>

int main_bench(){
	double n,i;
	my_scanf("%lf",&n);
	double x;
	double m,p;
	my_scanf("%lf %lf",&m,&p);
	x=p/m;
	for(i=0;i<n-1;i++){
		double a,b;
		my_scanf("%lf %lf",&a,&b);
        double y;
		y=b/a;
		if(y-x>0.05){
			my_printf("better\n");
		}else if(x-y>0.05){
			my_printf("worse\n");
		}else if((y-x<=0.05)&&(y-x>=-0.05)){
			my_printf("same\n");
		}
	}
	return 0;
}
