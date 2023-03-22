#define NUM_ITER 22933

#include <header.h>

int main_bench(){


int i,j,n;
	double a,sv[1000][2];

	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			my_scanf("%d",&sv[i][j]);
		}
	}

	a=sv[0][1]/sv[0][0];

	for(i=1;i<n;i++){
		if(a-sv[i][1]/sv[i][0]>0&&(a-sv[i][1]/sv[i][0])>0.05){
			
				my_printf("worse\n");
		
		}
		else if((a-sv[i][1]/sv[i][0])<0&&sv[i][1]/sv[i][0]-a>0.05){
		
				my_printf("better\n");
			}
		
		else{
			my_printf("same\n");
		}
	}
	return 0;
}
		


	







