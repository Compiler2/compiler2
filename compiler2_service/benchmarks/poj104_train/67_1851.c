#define NUM_ITER 31528

#include <header.h>

int main_bench(){
	int x,y,a,n,result,i;
	double sz[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&x,&y);
		sz[i]=1.0*y/x;
	}
	for(i=1;i<n;i++){
		if(20*(sz[i]-sz[0])<-1){
			my_printf("worse\n");
		}
		else if(20*(sz[i]-sz[0])>1){
			my_printf("better\n");
		}
		else{
			my_printf("same\n");
		}
	}
	
	return 0;
}
