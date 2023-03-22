#include <header.h>

int main_bench(){
	int n,k,i,j;
	int sz[10000];
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n-1;i++){
		my_scanf("%d ",&sz[i]);
	}
	if(i=n-1){
		my_scanf("%d",&sz[i]);
	}int r=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(sz[i]+sz[j]==k){
		     r=1;
			break;
			}else{
		continue;
			}
		}
	}
	if(r==1){
		my_printf("yes");
	}else if(r==0){
		my_printf("no");
	}
	return 0;
}