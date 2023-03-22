#define NUM_ITER 30955

#include <header.h>

int main_bench(){
	int n,i;
	double old,xlf;
	my_scanf("%d",&n);
	int*zs=(int*)malloc(sizeof(int)*n);
	int*yx=(int*)malloc(sizeof(int)*n);
	
	
	for(i=0;i<n;i++){
		my_scanf("%d%d",&zs[i],&yx[i]);
	}
	for(i=0;i<n;i++){
		if(i==0){
			old=(double)yx[i]/zs[i];
		}else{
			xlf=(double)yx[i]/zs[i];
			if(xlf-old>0.05){
				my_printf("better");
				my_printf("\n");
			}else if(old-xlf>0.05){
				my_printf("worse");
				my_printf("\n");
			}else{
				my_printf("same");
				my_printf("\n");
			}
			
		}
	}
return 0;
}