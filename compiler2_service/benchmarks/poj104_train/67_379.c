#define NUM_ITER 35022

#include <header.h>

int main_bench(){
	int n,sj[1000][2],i;
	float c[1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&sj[i][0],&sj[i][1]);
		c[i]=(float)sj[i][1]/sj[i][0];
	}
	for(i=1;i<n;i++){
		if(c[i]>c[0]&&c[i]-c[0]>0.05){
			my_printf("better\n");
		}
		else if(c[0]>c[i]&&c[0]-c[i]>0.05){
			my_printf("worse\n");
		}
		else{
			my_printf("same\n");
		}
	}
    return 0;
}
