#define NUM_ITER 59798

#include <header.h>


int main_bench()
{
	int k, n, i, j, b, t=0, a[1000];
	my_scanf("%d %d",&n, &k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			b=a[i]+a[j];
			if(k==b){
				t=1;
				break;
			}
		}
        if(t==1)break;				
	}
	if(t==1){
	    my_printf("yes");
	}
	if(t==0){
	    my_printf("no");
	}
	return 0;
}

