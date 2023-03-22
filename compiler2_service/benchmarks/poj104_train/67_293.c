#define NUM_ITER 28635

#include <header.h>

int main_bench()
{
	int i,n;
	float a,b,ji,c[100],d[100],qita[100];
	my_scanf("%d",&n);
	my_scanf("%d%d",&a,&b);
	ji=b/a;
	for(i=0;i<n-1;i++){
		my_scanf("%f%f",&c[i],&d[i]);
		qita[i]=d[i]/c[i];
	}
	for(i=0;i<n-1;i++){
		if(qita[i]-ji>0.05){
			my_printf("better\n");
		}else if(ji-qita[i]>0.05){
			my_printf("worse\n");
		}else{
			my_printf("same\n");
		}
	}
	return 0;
}


