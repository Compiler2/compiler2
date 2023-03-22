#include <header.h>

int main_bench(){
	int sz[1000],n,i,e,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	for(k=n;k>1;k--){
		for(i=0;i<k-1;i++){
			if(sz[i]<sz[i+1]){
				e=sz[i];
				sz[i]=sz[i+1];
				sz[i+1]=e;
			}
		}
	}
	my_printf("%d\n%d\n",sz[0],sz[1]);
	return 0;
}
 