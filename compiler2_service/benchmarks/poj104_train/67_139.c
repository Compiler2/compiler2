#include <header.h>

int main_bench(){
	int n,i;
	int a,b,c,d;
	my_scanf("%d",&n);
	my_scanf("%d%d",&a,&b);
	for(i=1;i<n;i++){
		my_scanf("%d%d",&c,&d);
        if((double)d/c-(double)b/a>0.05){
			my_printf("better\n");
		}else if((double)b/a-(double)d/c>0.05){
			my_printf("worse\n");
		}else{
            my_printf("same\n");
		}
	}

	return 0;
}
