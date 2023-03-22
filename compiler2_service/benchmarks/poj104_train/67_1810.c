#include <header.h>

int main_bench(){
	int n,s,t,a,b,i;
    my_scanf("%d",&n);
	my_scanf("%d%d",&s,&t);
	for(i=0;i<n-1;i++){
		my_scanf("%d%d",&a,&b);
		if(1.0*b/a-1.0*t/s>0.05){my_printf("better\n");}
        else if(1.0*b/a-1.0*t/s<-0.05){my_printf("worse\n");}
		else{my_printf("same\n");}
	}
	return 0;
}