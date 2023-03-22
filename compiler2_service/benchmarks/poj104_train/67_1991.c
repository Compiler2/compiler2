#include <header.h>


int main_bench(){
	int n;
	double sy[100][2];
	my_scanf("%d",&n);
	double *sz=(double*)malloc(sizeof(double)*n);
	for(int i=0;i<n;i++){
		my_scanf("%lf%lf",&sy[i][0],&sy[i][1]);
		sz[i]=sy[i][1]/sy[i][0];
	}
    for(int k=1;k<n;k++){
		if((sz[k]-sz[0])<0.05&&(sz[k]-sz[0])>-0.05){
			my_printf("same\n");
		}else if((sz[0]-sz[k])>=0.05){
			my_printf("worse\n");
		}else if((sz[k]-sz[0])>=0.05){
			my_printf("better\n");
		}
	}
	return 0;
}
