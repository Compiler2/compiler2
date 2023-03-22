#define NUM_ITER 6131

#include <header.h>

int main_bench(){
	int m=0,k,n,i=0,j=0,a[1000];
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	i=0;
	for(j=0;j<n;j++){
		i=0;
		for(i=0;i<n;i++){
			if(i!=j){
				if((a[i]+a[j])==k){
					m=1;
					break;
				}
			}
		}
	}
	if(m==1){my_printf("yes");}
	else{my_printf("no");}
return 0;
}