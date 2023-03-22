#define NUM_ITER 28312

#include <header.h>

int  main_bench(){
	int n,i;
	double a[100],b[100];
	double m,t;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%lf%lf",&a[i],&b[i]);
	}
	m=b[0]/a[0];
	for(i=1;i<n;i++){
		t=b[i]/a[i];
		if(t-m>0.05){
			my_printf("better\n");
		}else if(m-t>0.05){
			my_printf("worse\n");
		}else{
			my_printf("same\n");
		}
	}
	return 0;
}
