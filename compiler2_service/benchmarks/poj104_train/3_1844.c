#include <header.h>

int main_bench(){
	int n,k;
	my_scanf("%d %d",&n,&k);
	int i;
	int sz[1000];
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	int he[1000][1000];
	int j;
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(i!=j){
			he[i][j]=sz[i]+sz[j];
			}
		}
	}
	int t=0;
		int d=1;
	for(j=0;j<n&&d==1;j++){
		for(i=0;i<n;i++){
			if(i!=j){
				if(he[i][j]==k){
					my_printf("yes");
					d=0;
                                        break;
				}
			}
			t++;
		}
	}
	if(t==n*n){
		my_printf("no");
	}
	return 0;
}
