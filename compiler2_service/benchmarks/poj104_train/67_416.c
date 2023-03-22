#define NUM_ITER 24973

#include <header.h>

int main_bench(){
	int n,lc,yx,i;
	float x,y;
	my_scanf("%d",&n);
	my_scanf("%d%d",&lc,&yx);
		x=1.0*yx/lc;
	for(i=0;i<n-1;i++)
	{
		lc=0;
		yx=0;
		y=0;
		my_scanf("%d%d",&lc,&yx);
		y=1.0*yx/lc;
		if((y-x)>0.05){
			my_printf("better\n");}
		else if((x-y)>0.05){
			my_printf("worse\n");}
		else if((y-x)<=0.05&&(x-y)<=0.05){
			my_printf("same\n");}
		
	}
	return 0;
}