#include <header.h>

int main_bench(){
	int sz[100],n;
	my_scanf("%d\n",&n);
	int i;
	for(i=1;i<=n;i++){
		if(i<n){
			my_scanf("%d ",&sz[i-1]);
		}
		else{
			my_scanf("%d",&sz[i-1]);
		}
	}
	for(i=n;i>=1;i--){
		if(i>1){
			my_printf("%d ",sz[i-1]);
		}
		else{
			my_printf("%d",sz[i-1]);
		}
	}
	return 0;
}