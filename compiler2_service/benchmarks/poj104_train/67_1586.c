#define NUM_ITER 26340

#include <header.h>

int main_bench(){
	int n,i,x,y,a,b;
	double p,q;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==0){
			my_scanf("%d%d",&x,&y);
			p=1.0*y/x;
		}else{
			my_scanf("%d%d",&a,&b);
			q=1.0*b/a;
			if(q-p>0.05){
				my_printf("better\n");
			}else if(p-q>0.05){
				my_printf("worse\n");
			}else{
				my_printf("same\n");
			}
		}
	}
	return 0;
}