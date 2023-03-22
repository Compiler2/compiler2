#include <header.h>

int main_bench(){
	int n,sz[300],i,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			if (sz[i]==sz[k]&&i!=k&&sz[k]!=100000000){
				sz[k]=100000000;
			}
		}
	}
	my_printf("%d",sz[0]);		
	for(i=1;i<n;i++){
				if(sz[i]==100000000){
					continue;
				}
				
				my_printf(",%d",sz[i]);
			}
			
			return 0;
	}
