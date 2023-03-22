#define NUM_ITER 56482

#include <header.h>

int main_bench()
{
	int n,k,t,j,sz[1000];
	my_scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	for(t=0;t<n-1;t++){
		for(j=t+1;j<n;j++){
			if(sz[t]+sz[j]==k){
				my_printf("yes");
				break;
			}
		}
		if(j<n)
			break;
	}
	if(t==n-1){
		my_printf("no");
	}
	return 0;
}
		