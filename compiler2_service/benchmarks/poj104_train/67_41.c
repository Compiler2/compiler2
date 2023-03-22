#include <header.h>

int main_bench()
{
	int n,i;
	int zs[1000],yx[1000];
	double x,y[1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&zs[i],&yx[i]);
        x=1.0*100*yx[0]/zs[0];
		y[i]=1.0*100*yx[i]/zs[i];
	}
	for(i=1;i<n;i++){
		if(y[i]-x>5.0){
			my_printf("better\n");
		}else if(x-y[i]>5.0){
			my_printf("worse\n");
		}else{
			my_printf("same\n");
		}
	}
	return 0;
}
