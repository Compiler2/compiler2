#include <header.h>

int main_bench(){
	int n,i,k,r,sz[100000];
	my_scanf("%d",&n);
    for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
		}
	my_scanf("%d",&k);
	for(i=0;i<n;i++){
		if(sz[i]==k){
			
			for(r=i;r<n;r++){
				sz[r]=sz[r+1];
				}
			i--;
			n--;
			}
		}
	
		
		
	for(i=0;i<n;i++){
		if(i==n-1){
			my_printf("%d",sz[i]);
			}
		else
		my_printf("%d ",sz[i]);
		}
	
	return 0;
	
	}
