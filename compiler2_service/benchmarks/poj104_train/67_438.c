#define NUM_ITER 30572

#include <header.h>

int main_bench()
{
	int n,zong[100],yx[100],i;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d\n",&zong[i],&yx[i]);
	}
	for(i=1;i<n;i++){
		if((double)yx[0]/zong[0]-(double)yx[i]/zong[i]>=0.05){
			my_printf("worse\n");
		}
		else if((double)yx[i]/zong[i]-(double)yx[0]/zong[0]<=0.05){
			my_printf("same\n");
		}
		else {
			my_printf("better\n");
		}
	}
	return 0;
}