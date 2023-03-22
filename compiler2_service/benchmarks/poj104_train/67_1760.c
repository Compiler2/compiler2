#include <header.h>

int main_bench(){
	int n,x[100],y[100],i;
	double z[100],k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&x[i],&y[i]);
		z[i]=1.0*y[i]/x[i];
	}
	for(i=1;i<n;i++){
		k=z[i]-z[0];
		if(k>0.05){
			my_printf("better\n");
		}
		if(k<0.05&&k>-0.05){
			my_printf("same\n");
		}
		if(k<-0.05){
			my_printf("worse\n");
		}
	}
	return 0;
}