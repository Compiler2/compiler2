#define NUM_ITER 55163

#include <header.h>

int main_bench()
{
	int n,k,a[1000],i,j,s=0;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n-1;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				
				
				break;
			}
		}
		if(j!=n){
			my_printf("yes\n");
			break;
		}
		
		
	}
	if(i==n-1){
		my_printf("no\n");
	}
	return 0;
}
