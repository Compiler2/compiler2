#define NUM_ITER 6042

#include <header.h>


int main_bench()
{
	int a[1000],n,k,i,j,x;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				x++;
			}
		}
	}
	if(x!=0){
		my_printf("yes");
	}
	else{
		my_printf("no");
	}
	return 0;
}

