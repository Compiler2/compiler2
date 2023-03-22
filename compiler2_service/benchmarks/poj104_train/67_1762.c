#define NUM_ITER 24361

#include <header.h>

int main_bench(){
	int n,a[100][2];
	int i,j;
	double y[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
		my_scanf("%d\n",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
	
			
				y[i]=1.0*a[i][1]/a[i][0];
			
		
	}
	for(i=1;i<n;i++){
	
			if(y[i]-y[0]>0.05){
				my_printf("better\n");
			}
			else if(y[0]-y[i]>0.05){
				my_printf("worse\n");
			}
			else{
				my_printf("same\n");
			}
		}
	
	return 0;
}
