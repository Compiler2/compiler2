#include <header.h>

int main_bench()
{
	int n,i,y,j;
	double a[100];
	my_scanf("%d",&n);
    for(i=0;i<n;i++){
		my_scanf("%d %d",&y,&j);
		a[i]=1.0*j/y;
	}
	for(i=1;i<n;i++){
		if(a[i]>=a[0]){
			if(a[i]-a[0]>0.05){
				my_printf("better\n");
			}else{
				my_printf("same\n");
			}
		}
		if(a[i]<a[0]){
			if(a[0]-a[i]>0.05){
				my_printf("worse\n");
			}else{
				my_printf("same\n");
			}
		}
	}
	return 0;
}
