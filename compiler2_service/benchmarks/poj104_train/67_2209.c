#define NUM_ITER 24751

#include <header.h>

int main_bench()
{
    int x,y,n,z;
	double i,j,a;
	my_scanf("%d",&n);
		my_scanf("%d %d",&x,&y);
		i=(1.0*y)/x;
		for(z=2;z<=n;z++){
			my_scanf("%d %d",&x,&y);
			j=(1.0*y)/x;
			a=j-i;
				if(a>0.05){
					my_printf("better\n");
				}
				else{
					if(a<-0.05){
						my_printf("worse\n");
					}
					else{
						my_printf("same\n");
					}
				}
		}
	return 0;
} 