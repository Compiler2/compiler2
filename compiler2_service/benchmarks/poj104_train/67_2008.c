#define NUM_ITER 36724

#include <header.h>

int main_bench()
{
	int n,i,x[1000],y[1000];
	double a,b;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&x[i],&y[i]);
	}
	a=1.0*y[0]/(1.0*x[0]);
	for(i=1;i<n;i++){
		b=1.0*y[i]/(1.0*x[i]);
		if(a-b>0.05){
			my_printf("worse\n");
		}else if(b-a>0.05){
			my_printf("better\n");
		}else{
			my_printf("same\n");
		}
	}
	return 0;
}

