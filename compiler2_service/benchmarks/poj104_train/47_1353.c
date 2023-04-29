#define NUM_ITER 53695

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int sz[100];
	for(int a=0;a<=n-1;a++){
		my_scanf("%d",&(sz[a]));
	}
	for(int b=n-1;b>=1;b=b-1){
		my_printf("%d ",sz[b]);
	}
	my_printf("%d",sz[0]);
	return 0;
}