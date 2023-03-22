#define NUM_ITER 54633

#include <header.h>

int main_bench(){
	int n,k,i;
	int sz[1000];
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(sz[i]+sz[j]==k){
				my_printf("yes");
				return 0;
			}
		}
	}
	my_printf("no");
	return 0;
}
