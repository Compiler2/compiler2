#define NUM_ITER 32729

#include <header.h>

int main_bench(){
	int n,i;
	int a[100],b[100];
	double x,y;
	int r[100]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
	}
	x=1.0*b[0]/a[0];
	for(i=1;i<n;i++){
		y=1.0*b[i]/a[i];
		if(y-x>0.05){
			r[i]=1;
		}
		else if(x-y>0.05){
			r[i]=-1;
		}
		else r[i]=0;
	}
	for(i=1;i<n;i++){
		switch(r[i]){
		case 1:
			my_printf("better\n");
			break;
		case 0:
			my_printf("same\n");
			break;
		case -1:
			my_printf("worse\n");
			break;
		}
	}
	return 0;
}