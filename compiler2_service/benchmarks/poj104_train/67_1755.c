#define NUM_ITER 28437

#include <header.h>

int main_bench(){
	int n,i,j,a,b;
	int sz[100][2];
	double c,d;
	my_scanf("%d",&n);
	my_scanf("%d %d",&a,&b);
	c=1.0*b/a;
	for(i=1;i<n;i++){
		for(j=0;j<2;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	for(i=1;i<n;i++){
			d=1.0*sz[i][1]/sz[i][0];
			if(d-c>0.05){
				my_printf("better\n");
			}else if(c-d>0.05){
				my_printf("worse\n");
			}else {
				my_printf("same\n");
			}
	}
	return 0;
}