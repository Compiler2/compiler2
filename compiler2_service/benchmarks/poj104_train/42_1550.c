#define NUM_ITER 42244

#include <header.h>

int main_bench()
{
	int n,sz[100000],k;
	int i,t=0,s=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
        my_scanf("%d ",&sz[i]);
	}
	my_scanf("%d",&k);
		for(i=0;i<n;i++){
		if(sz[i]!=k){
		
        s++;
		}
	}
	for(i=0;i<n;i++){
		if(sz[i]!=k&&t!=s-1){
			my_printf("%d ",sz[i]);
			t++;
		}else if(sz[i]!=k&&t==s-1){
			my_printf("%d",sz[i]);
		}
	}
	return 0;
}


