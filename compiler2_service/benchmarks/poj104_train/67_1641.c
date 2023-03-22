#define NUM_ITER 28494

#include <header.h>

int main_bench(){
int n,i;
double t;
int a[100],b[100];
my_scanf("%d",&n);
my_scanf("%d%d",&a[0],&b[0]);
	t=1.0*b[0]/a[0];
	for (i=1;i<n;i++){
my_scanf("%d%d",&a[i],&b[i]);
		if(1.0*b[i]/a[i]-t>0.05){
			my_printf("better\n");
		}
		else if(t-1.0*b[i]/a[i]>0.05){
			my_printf("worse\n");
		}
		else{
			my_printf("same\n");
		}
	}

	return 0;
}
