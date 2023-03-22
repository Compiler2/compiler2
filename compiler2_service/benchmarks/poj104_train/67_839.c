#define NUM_ITER 34095

#include <header.h>

int main_bench(){
	int n,i,x,y;
	my_scanf("%d",&n);
	my_scanf("%d%d",&x,&y);
	double z=y*1.0/x;
	double sz[100];
	int zong[100];
	int xiao[100];
	for(i=0;i<n-1;i++){
		my_scanf("%d%d",&zong[i],&xiao[i]);
		sz[i]=xiao[i]*1.0/zong[i];
	}
	for(i=0;i<n-2;i++){
		if(sz[i]-z>0.05){
			my_printf("better\n");
		}
		else if(z-sz[i]>0.05){
			my_printf("worse\n");
		}
		else{
			my_printf("same\n");
		}
	}
	if(sz[i]-z>0.05){
			my_printf("better");
		}
		else if(z-sz[i]>0.05){
			my_printf("worse");
		}
		else{
			my_printf("same");
		}

	return 0;
}
