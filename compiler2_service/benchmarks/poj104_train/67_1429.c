#define NUM_ITER 23619

#include <header.h>

int main_bench(){
int n,i,j;
double sz[100][2];
my_scanf("%d",&n);
for(i=0;i<n;i++){
	for(j=0;j<2;j++){
my_scanf("%lf",&sz[i][j]);
	}
}
for(i=1;i<n;i++){
	if((sz[0][1]/sz[0][0])-(sz[i][1]/sz[i][0])>0.05){
my_printf("worse\n");	
	}
	else if((sz[i][1]/sz[i][0])-(sz[0][1]/sz[0][0])>0.05){
my_printf("better\n");
	}
	else{
		my_printf("same\n");
	}

}
return 0;
}