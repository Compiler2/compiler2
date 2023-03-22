#define NUM_ITER 26418

#include <header.h>

int main_bench()
{
	int n,i,a[100],b[100];
	my_scanf("%d",&n);
	my_scanf("%d %d",&a[0],&b[0]);
	for(i=1;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
		double s;
		s=1.0*b[i]/a[i]-1.0*b[0]/a[0];
		if(s>0.05){
			my_printf("better\n");
		}else if(s<0&&s<-0.05){
			my_printf("worse\n");
		}else{
			my_printf("same\n");
		}
	}
	return 0;
}