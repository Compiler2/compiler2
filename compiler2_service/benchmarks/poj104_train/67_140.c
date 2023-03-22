#define NUM_ITER 29709

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d\n",&n);
    int sz[1000][2];
	int i;
	double a,b,c;
	for(i=0;i<n;i++){
		my_scanf("%d %d\n",&(sz[i][0]),&(sz[i][1]));
	}
   	for(i=0;i<n;i++){
		if(i==0){
	            a=1.0*sz[i][1]/sz[i][0];
		}else{
			 b=1.0*sz[i][1]/sz[i][0];
			 if(a>=b){
				 double c=a-b;
				 if(c>0.05){
					 my_printf("worse\n");
				 }else{
					 my_printf("same\n");
				 }
			 }else{
				 double c=b-a;
				 if(c>0.05){
					 my_printf("better\n");
				 }else{
					 my_printf("same\n");
				 }
			 }
		}
	}
	return 0;
}

