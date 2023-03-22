#define NUM_ITER 24882

#include <header.h>

int main_bench(){
	int n,x,y;
	double b,c;
	int p,q;
	my_scanf("%d",&n);
	my_scanf("%d %d",&p,&q);
	double e=p,f=q;
	    c=1.00*f/e;
	for(int i=1;i<=n-1;i++){
		my_scanf("%d %d",&x,&y);
		double k=x,m=y;
		b=1.00*m/k;
		if(b<c){
			if(c-b<0.05){
				my_printf("same\n");
			}
			else
				my_printf("worse\n");
		}
		else if(b>c){
			if(b-c>0.05){
				my_printf("better\n");
			}
			else
				my_printf("same\n");
		}
	}
	return 0;
}


