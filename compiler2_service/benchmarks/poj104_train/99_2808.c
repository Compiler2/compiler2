#define NUM_ITER 47984

#include <header.h>

int main_bench(){
	int n,sz[100],i;
	double	a=0,b=0,c=0,d=0;
	my_scanf("%d",&n);
	for(i=0;i<n-1;i++){
		my_scanf("%d ",&sz[i]);
	}
	my_scanf("%d",&sz[n-1]);
    for(i=0;i<n;i++){
		if(sz[i]<=18){
			a=a+1;
		}
                  if((18<sz[i])&&(sz[i]<=35)){
			b=b+1;
		}
                 if((35<sz[i])&&(sz[i]<=60)){
			c=c+1;
		}
                  if(sz[i]>60){
			d=d+1;
		}
	}
    my_printf("1-18: %.2lf%%\n",a/n*100);
	my_printf("19-35: %.2lf%%\n",b/n*100);
	my_printf("36-60: %.2lf%%\n",c/n*100);
	my_printf("60??: %.2lf%%\n",d/n*100);
	return 0;
}