#define NUM_ITER 27516

#include <header.h>

int main_bench(){
	int i=0,n;
	my_scanf("%d",&n);
	double*za=(double*)malloc(sizeof(double)*n);
	int*a=(int*)malloc(sizeof(int)*n);
	int*b=(int*)malloc(sizeof(int)*n);
	if(i==0){
		my_scanf("%d%d",&a[i],&b[i]);
		za[i]=1.0*b[i]/a[i];
	}
	for(i=1;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
		za[i]=1.0*b[i]/a[i];
		if(za[i]-za[0]>0.05){
			my_printf("better\n");
		}else if(za[0]-za[i]>0.05){
			my_printf("worse\n");
		}else{
			my_printf("same\n");
		}
	}
	free(za);
	free(a);
	free(b);
	
	return 0;
}