#define NUM_ITER 25083

#include <header.h>

int main_bench(){
	int n,i;
	double lx1,lx2[1000],br1,br2[1000],yx1,yx2[1000];
	my_scanf("%d",&n);
	my_scanf("%lf %lf",&br1,&yx1);
	lx1=yx1/br1;
	for(i=0;i<n-1;i++){
		my_scanf("%lf %lf",&br2[i],&yx2[i]);
		lx2[i]=yx2[i]/br2[i];
	}
	for(i=0;i<n-1;i++){
		if(lx2[i]-lx1>0.05){
			my_printf("better\n");
		}else if(lx1-lx2[i]>0.05){
			my_printf("worse\n");
		}else if((lx1-lx2[i]<=0.05&&lx1-lx2[i]>=0)||(lx2[i]-lx1<=0.05&&lx2[i]-lx1>=0)){
			my_printf("same\n");
		}
	}
	return 0;
}