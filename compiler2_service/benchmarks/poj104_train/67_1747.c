#include <header.h>

int main_bench(){
	int n,a,b,i,m,k;
	double x,y;
	my_scanf("%d %d %d",&n,&a,&b);
	x=1.0*b/a;
	for(i=0;i<n-1;i++){
		my_scanf("%d %d",&m,&k);
		y=1.0*k/m;
		if(x-y>0.05){
			my_printf("worse");
			my_printf("\n");
		}else if(y-x>0.05){
			my_printf("better");
			my_printf("\n");
		}else {
			my_printf("same");
			my_printf("\n");
		}
	}
		return 0;
	}