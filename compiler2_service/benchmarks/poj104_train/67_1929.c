#define NUM_ITER 19893

#include <header.h>

int main_bench(){
	int n,i;
	my_scanf("%d",&n);
	double sz[1000],sa[1000];
	for(i=0;i<n;i++){
       my_scanf("%lf %lf",&sz[i],&sa[i]);
	if(i>0){
		if(sa[i]/sz[i]-sa[0]/sz[0]>0.05){
			my_printf("better\n");
		}
		else if(sa[0]/sz[0]-sa[i]/sz[i]>0.05){
			my_printf("worse\n");
		}
		else{
			my_printf("same\n");
		}
	}
	}
	return 0;
}
