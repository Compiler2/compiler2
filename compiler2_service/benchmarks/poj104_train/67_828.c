#include <header.h>

int main_bench(){
	int n,zy,yy,zq,yq,i;
	float x,y;
	my_scanf("%d",&n);
	my_scanf("%d%d",&zy,&yy);
	x=1.0*yy/zy;
	for(i=0;i<n-2;i++){
		my_scanf("%d%d",&zq,&yq);
		y=1.0*yq/zq;
		if(y-x>0.05){
			my_printf("better\n");
		}
		else if(y-x<-0.05){
			my_printf("worse\n");
		}
		else{
			my_printf("same\n");
		}
	}
	my_scanf("%d%d",&zq,&yq);
	y=1.0*yq/zq;
	if(y-x>0.05){
		my_printf("better");
	}
	else if(y-x<-0.05){
		my_printf("worse");
	}
	else if(y-x>=-0.05 && y-x<=0.05){
		my_printf("same");}

	return 0;
}