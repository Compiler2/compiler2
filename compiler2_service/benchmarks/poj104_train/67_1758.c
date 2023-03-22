#define NUM_ITER 29809

#include <header.h>

int main_bench(){
	int n,i,a,b;
	my_scanf("%d",&n);
	double *c=(double*)malloc(sizeof(double)*n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
		c[i]=((double)b)/((double)a);
	}
	for(i=1;i<n;i++){
		if(c[i]-c[0]>0.05){
			my_printf("better\n");
		}
		if(c[i]-c[0]<-0.05){
			my_printf("worse\n");
		}
		if((c[i]-c[0]>-0.05)&&(c[i]-c[0]<0.05)){
			my_printf("same\n");
		}
	}
	return 0;
}