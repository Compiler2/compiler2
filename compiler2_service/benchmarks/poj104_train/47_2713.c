#define NUM_ITER 56902

#include <header.h>

int main_bench(){
	int n,a[100];
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	                    }
	for(int t=n-1;t>=0;t--){
	   if(t>0)my_printf("%d ",a[t]);
	   else{my_printf("%d",a[t]);}
	                    }
	return 0;
}