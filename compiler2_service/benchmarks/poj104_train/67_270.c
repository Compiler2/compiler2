#define NUM_ITER 28386

#include <header.h>

int main_bench()
{
	int n,a1,a2,b1,b2;
	my_scanf("%d%d%d",&n,&a1,&a2);
	float x,y;
	x=(float)a2/a1;
	for(int i=0;i<n-1;i++){
		my_scanf("%d%d",&b1,&b2);
		y=(float)b2/b1;
		if((y-x)>0.05){
			my_printf("better\n");
		}
		else if((x-y)>0.05){
			my_printf("worse\n");
		}
		else{
			my_printf("same\n");
		}
	}
	return 0;
}

	