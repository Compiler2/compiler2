#define NUM_ITER 24809

#include <header.h>

int main_bench()
{
	int th,i,to,s;
	float c,r;
	my_scanf("%d",&th);
	my_scanf("%d %d",&to,&s);
	c=1.0*s/to;
	for(i=0;i<th-1;i++){
		my_scanf("%d %d",&to,&s);
		r=1.0*s/to;
		if(r>c&&r-c>0.05){
			my_printf("better\n");
		}else if(r<c&&c-r>0.05){
			my_printf("worse\n");
		}else{
			my_printf("same\n");
		}
	}
	return 0;
}
