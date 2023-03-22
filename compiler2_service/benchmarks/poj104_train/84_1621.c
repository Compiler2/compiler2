#include <header.h>

int main_bench(){
	int i,n,t;
	my_scanf("%d",&n);
	int sz[100];
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	
	}
	
	for(i=0;i<n-1;i++){
		if(sz[i]>sz[i+1]){
			t=sz[i+1];
			sz[i+1]=sz[i];
			sz[i]=t;
		}else{
			sz[i+1]=sz[i+1];
		}
	}
	for(i=0;i<n-2;i++){
		if(sz[i]>sz[i+1]){
			t=sz[i+1];
			sz[i+1]=sz[i];
			sz[i]=t;
		}else{
			sz[i+1]=sz[i+1];
		}
	}
	
	my_printf("%d\n%d",sz[n-1],sz[n-2]);
		return 0;
}
