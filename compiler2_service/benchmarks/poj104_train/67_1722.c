#define NUM_ITER 31525

#include <header.h>

int main_bench(){
int n,i;
double x,y[100];
int sz1[100],sz2[100];
my_scanf("%d",&n);
for(i=0;i<n;i++){
	if(i==0){
	my_scanf("%d %d",&sz1[0],&sz2[0]);
	x=1.0*sz2[0]/sz1[0];
	}else{
	my_scanf("%d %d",&sz1[i],&sz2[i]);
	y[i]=1.0*sz2[i]/sz1[i];
	}
}
for(i=1;i<n;i++){
	if(y[i]-x>0.05){
		my_printf("better\n");
	}else if(x-y[i]>0.05){
	my_printf("worse\n");
	}else{
	my_printf("same\n");
	}
	}


	return 0;

}