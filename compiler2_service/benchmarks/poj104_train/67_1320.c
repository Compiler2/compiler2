#include <header.h>

int main_bench(){
	int n,a,b,c,d;
	double biao,linshi;
	my_scanf("%d",&n);
	my_scanf("%d %d",&a,&b);
	biao=(double)b/(double)a;
	for(int i=0;i<n-1;i++){
		my_scanf("%d %d",&c,&d);
		linshi=(double)d/(double)c;
		if(biao-linshi>=0.05){
			my_printf("worse\n");
		}
		  else if(linshi-biao>=0.05){
			my_printf("better\n");
		}
		else {
			my_printf("same\n");
			}
	}
	return 0;
}
