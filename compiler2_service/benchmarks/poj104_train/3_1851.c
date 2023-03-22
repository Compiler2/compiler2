#define NUM_ITER 50738

#include <header.h>

int main_bench(){
	int n,k,i,a,b;
	int sz[1001];
	my_scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++){
		my_scanf("%d ",&sz[i]);
	}
	for(a=1;a<n;a++){
		for(b=a+1;b<=n;b++){
			if(sz[a]+sz[b]==k){
				my_printf("yes");
				break;
			}
		}
		if(sz[a]+sz[b]==k){
			break;
		}
		if(a==n-1){
			my_printf("no");
		}
	}

	return 0;
}
