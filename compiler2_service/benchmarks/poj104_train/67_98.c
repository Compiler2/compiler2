#define NUM_ITER 27651

#include <header.h>

int main_bench(){
	int n,i,s=0;
	float x,y[300],a[300],b[300],m,p;
	my_scanf("%d",&n);
	my_scanf("%f %f",&m,&p);
    x=p/m;
	for(i=0;i<n-1;i++){
		my_scanf("%f %f",&a[i],&b[i]);
		y[i]=b[i]/a[i];
	}
	for(i=0;i<n-1;i++){
		if ((y[i]-x)>0.05){
			my_printf("better\n");
			s++;
		}
		else if ((x-y[i])>0.05){
			my_printf("worse\n");
			s++;
		}
		else {
			my_printf("same\n");
			s++;
		}

	}
	return 0;
}