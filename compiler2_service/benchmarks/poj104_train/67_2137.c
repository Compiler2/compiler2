#include <header.h>

int main_bench(){
	int n,a,b,s,l,i;
	double c;
	my_scanf("%d%d%d",&n,&a,&b);
	c=1.0*b/a;
    for(i=0;i<n-1;i++){
		my_scanf("%d%d",&s,&l);
		double f=1.0*l/s;
		if(f-c>0.05){
			my_printf("better\n");
		}else if(f-c>-0.05){
			my_printf("same\n");
		}else{
			my_printf("worse\n");
		}
	}
	return 0;
}
