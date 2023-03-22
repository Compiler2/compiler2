#define NUM_ITER 53664

#include <header.h>

int main_bench(){
	int n,a[1000],k,i,j,t;
	my_scanf("%d",&n);
	my_scanf("%d",&k);
	i=0;
	while(i<n){
		my_scanf("%d",&a[i]);
		i=i+1;
	}
	for(j=0;j<n-1;j=j+1){
                       for(i=j-1;i<n-1;i=i+1){
                                            if(a[i]+a[j]==k){
                                                            break;
                                            }
                       }
                       if(a[i]+a[j]==k){
                                       break;
                       }
    }
    if(a[i]+a[j]==k){
                 my_printf("yes");
    }
    else{
                 my_printf("no");
    }
	return 0;
}