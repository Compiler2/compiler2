#define NUM_ITER 27160

#include <header.h>

int main_bench(){
	int n,i;
	int zs,yx;
	double a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==0){
			my_scanf("%d %d",&zs,&yx);
			a=1.0*yx/zs;
		}else {
			my_scanf("%d %d",&zs,&yx);
			if(1.0*yx/zs-a>0.05){
				my_printf("better\n");
			}else if(1.0*yx/zs-a<-0.05){
				my_printf("worse\n");
			}else {
				my_printf("same\n");
			}
		}
	}
		
	return 0;
}