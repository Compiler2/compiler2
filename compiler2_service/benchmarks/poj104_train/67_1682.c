#define NUM_ITER 1144151

#include <header.h>

int main_bench(){
	double n,x,y;
	double a[100],b[100];
	double e,c;
	double xl[100];
	my_scanf("%lf%lf%lf",&n,&x,&y);
	e=y/x;
	for(int i=0;i<n-1;i++){
		my_scanf("%lf%lf",&a[i],&b[i]);
		xl[i]=b[i]/a[i];
	}
	for(int k=0;k<n-1;k++){
		c=xl[k]-e;
		if(c>0.05){
			my_printf("better\n");
		}
		if(c<-0.05){
			my_printf("worse\n");
		}
		if(-0.05<=c&&c<=0.05)
			my_printf("same\n");
	}

	
	return 0;
}