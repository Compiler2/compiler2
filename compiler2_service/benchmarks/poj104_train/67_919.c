#define NUM_ITER 26612

#include <header.h>

int main_bench(){
	int n,a,b,i;
	double x;
	my_scanf("%d\n",&n);
	my_scanf("%d %d\n",&a,&b);
	x=(double)b/a;
	for(i=0;i<n-1;i++){
		double y;
		int m,h;
		my_scanf("%d %d",&m,&h);
		y=(double)h/m;
		if(y-x>0.05){
			my_printf("better\n");
		}
		if(x-y>0.05){
			my_printf("worse\n");
		}
		if(x-0.05<=y&&y<=x+0.05){
			my_printf("same\n");
		}
	}
    return 0;
}