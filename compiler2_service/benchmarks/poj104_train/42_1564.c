#include <header.h>

int main_bench(){
	int n,i,k,t,m;
    int sz[100000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	my_scanf("%d",&sz[i]);
	}
	my_scanf("%d",&k);
	t=0;
    for(i=0;i<n;i++){
		if(sz[i]==k){
		t=t+1;}
	}
		for(m=0;m<100;m++){
			for(i=0;i<n;i++){
				if(sz[i]==k){
					sz[i]=sz[i+1];
					sz[i+1]=k;
				}
			}
		}
		for(i=0;i<n-t;i++){
			if(i==0){my_printf("%d",sz[i]);}
			else{my_printf(" %d",sz[i]);}}
			return 0;
		}