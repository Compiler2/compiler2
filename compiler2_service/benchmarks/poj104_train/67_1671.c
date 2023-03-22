#define NUM_ITER 30912

#include <header.h>

int main_bench(){
	int n,i,a[100],b[100];
	double x,y;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&(a[i]),&(b[i]));
	}
	for(i=0;i<n;i++){
		if(i==0){
		x=1.0*b[i]/a[i];
		}
		if(i>0){
			y=1.0*b[i]/a[i];
			if(y-x>0.05){
				my_printf("better\n");
			}
			if(x-y>0.05){
                my_printf("worse\n");
			}
			else if(x-y>=-0.05&&x-y<=0.05){
                 my_printf("same\n");
			}
		}
	}
	return 0;
}