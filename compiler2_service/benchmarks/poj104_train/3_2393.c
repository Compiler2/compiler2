#define NUM_ITER 54141

#include <header.h>

int main_bench()
{
	int n,k,a[1000],i,j;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				my_printf("yes");
				break;
			} 
		}
		if(j!=n){
			break;
		}else if(j==n&&a[i]+a[j-1]==k){
		break;
		}else if(i==n-1&&a[i]+a[j-1]!=k){
		my_printf("no");
		}
	}
			
    return 0;
}