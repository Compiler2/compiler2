#include <header.h>

int main_bench(){
	int n,zbl[200],yxbl[100];
	double x,y[100];
	my_scanf("%d",&n);
	my_scanf("%d%d",&zbl[0],&yxbl[0]);
	x=1.0*yxbl[0]/zbl[0];
	for(int i=1;i<n;i++){
		my_scanf ("%d%d",&zbl[i],&yxbl[i]);
		y[i]=1.0*yxbl[i]/zbl[i];
		if(y[i]-x>0.05){
			my_printf("better\n");
		}
		else if(x-y[i]>0.05){
			my_printf("worse\n");
		}
		else {
			my_printf("same\n");
		}
	}
	return 0;
}

	
	




