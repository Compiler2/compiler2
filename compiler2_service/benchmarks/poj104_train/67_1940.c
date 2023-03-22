#include <header.h>

int main_bench()
{
	int i,n;
	float xa,xb,xc;
	float ya[1000],yb[1000],yc[1000],yd[1000];
	my_scanf("%d",&n);
	my_scanf("%f %f",&xa,&xb);
	xc=xb/xa;
	for(i=1;i<n;i++){
		my_scanf("%f %f",&ya[i],&yb[i]);
		yc[i]=yb[i]/ya[i];
	}
	for(i=1;i<n;i++){
		yd[i]=yc[i]-xc;
		if(yd[i]>0.05){
			my_printf("better\n");
		}
		else if(yd[i]<-0.05){
			my_printf("worse\n");
		}
		else{
			my_printf("same\n");
		}
	}
	return 0;
}