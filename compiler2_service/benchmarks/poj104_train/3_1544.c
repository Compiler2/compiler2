#define NUM_ITER 54273

#include <header.h>

int main_bench()
{
	int a[1000],n,k,i,m;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(m=i+1;m<n;m++){
            if(a[i]+a[m]==k){

				my_printf("yes");
				break;}
				if(i==n-2&&m==n-1){
			my_printf("no");
			break;
		}
			
		
			
		}
		if(a[i]+a[m]==k){
			break;
		}
		if(i==n-2&&m==n-1){
			break;
		}
		
		
	}
	return 0;

}