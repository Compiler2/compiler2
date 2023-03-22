#define NUM_ITER 15173

#include <header.h>

int main_bench(){
	int n,min,max,a[50000],b[50000],i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&(a[i]),&b[i]);
	}
	min=a[0];
	max=b[0];
	for(i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	for(i=0;i<n;i++){
		if(b[i]>max){
			max=b[i];
		}
	}
	double j;
	int k=0;
	for(j=min;j<=max;j+=0.5){
		for(i=0;i<n;i++){
			if(j>=a[i]&&j<=b[i]){
				k=1;
				break;
			}
		}
		if(k==0){
			my_printf("no");
			return 0;
		}
        k=0;
	}
	my_printf("%d %d",min,max);
	return 0;
}
