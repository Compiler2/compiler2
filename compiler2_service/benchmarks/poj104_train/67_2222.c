#define NUM_ITER 28068

#include <header.h>

int main_bench(){
	double zbl[100],yxbl[100];
	int i,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%lf%lf",&zbl[i],&yxbl[i]);
	}
	double yxl[100];
	for(i=0;i<n;i++){
		yxl[i]=yxbl[i]/zbl[i];
	}
	for(i=1;i<n;i++){
		if(yxl[0]-yxl[i]>0.05){
			my_printf("worse\n");
		}
		if(yxl[i]-yxl[0]>0.05){
			my_printf("better\n");
		}
		else if(yxl[0]-yxl[i]<=0.05&&yxl[i]-yxl[0]<=0.05){
			my_printf("same\n");
		}
	}
	return 0;
}

