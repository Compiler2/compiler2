#define NUM_ITER 25751

#include <header.h>

int main_bench(){
	int n,i,a[100],b[100];
	double c[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
		c[i]=1.0*b[i]/a[i];
		if(i>0){
		if((c[i]-c[0])>0.05){
			my_printf("better\n");
		}else if((c[0]-c[i])>0.05){
			my_printf("worse\n");
		}else{
			my_printf("same\n");
		}
	}
	}return 0;
}