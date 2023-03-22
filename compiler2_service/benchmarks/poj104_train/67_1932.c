#define NUM_ITER 33633

#include <header.h>

int main_bench(){
	int n,t[100],e[100],total,effect,i;
	double x,y[100];
	my_scanf("%d",&n);
	my_scanf("%d%d",&total,&effect);
	x=100.0*effect/total;
	for(i=0;i<(n-1);i++){
		my_scanf("%d%d",&t[i],&e[i]);
		y[i]=100.0*e[i]/t[i];
	}
	for(i=0;i<(n-1);i++){
		if((y[i]-x)>5){
			my_printf("better\n");
		}
		if((x-y[i])>5){
			my_printf("worse\n");
		}
		if(((y[i]-x)<=5)&&((x-y[i])<=5)){
			my_printf("same\n");
		}
	}
	return 0;
}