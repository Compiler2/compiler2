#define NUM_ITER 2726

#include <header.h>

int main_bench(){
	int n,k,i,j,t=0;
	int sz[1000][1000];
	my_scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++){
		my_scanf("%d",&sz[0][i]);
		sz[i][0]=sz[0][i];
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j){
				continue;
			}else{
				sz[i][j]=sz[i][0]+sz[0][j];
			}
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(sz[i][j]==k){
				t=1;
			}
		}
	}
	if(t==1){
		my_printf("yes");
	}else{
		my_printf("no");
	}
	return 0;
}
