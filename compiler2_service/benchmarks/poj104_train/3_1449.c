#define NUM_ITER 59875

#include <header.h>

int main_bench()
{
	int n,k,i,j,sz[50000];
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<n+1;i++){
		for(j=i+1;j<n;j++){
			if(sz[i]+sz[j]==k){
				my_printf("yes");
			    j=n;
				i=n+1;
			}
		}
		if(i==n){
			my_printf("no");
		}
	}
	return 0;
}
