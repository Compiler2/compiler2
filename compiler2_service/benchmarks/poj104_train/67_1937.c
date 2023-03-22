#define NUM_ITER 34994

#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	int sz[100][2];
	double xl[100];
	for(i=0;i<n;i++){
		my_scanf("%d%d",&sz[i][0],&sz[i][1]);
		xl[i]=(double)sz[i][1]/sz[i][0];
	}
	for(i=1;i<n;i++){
		if(xl[i]-xl[0]>0.05){
			my_printf("better\n");
		}else if(xl[0]-xl[i]>0.05){
			my_printf("worse\n");
		}else{
			my_printf("same\n");
		}
	}
	return 0;
}