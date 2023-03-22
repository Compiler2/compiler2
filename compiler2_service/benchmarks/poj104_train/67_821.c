#define NUM_ITER 26479

#include <header.h>

int main_bench(){
	int n;
	double a[100];
	double c,b;
	my_scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		my_scanf("%lf%lf",&c,&b);
		a[i]=b/c;
	}
	for(i=1;i<n-1;i++){
		if(a[i]-a[0]>0.05){
			my_printf("better\n");
		}
		else if(a[0]-a[i]>0.05){
			my_printf("worse\n");
		}
		else{
			my_printf("same\n");
		}
	}
	if(a[n-1]-a[0]>0.05){
		my_printf("better");
	}
	else if(a[0]-a[n-1]>0.05){
		my_printf("worse");
	}
	else{
		my_printf("same");
	}
	return 0;
}