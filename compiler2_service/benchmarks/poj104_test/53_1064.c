#include <header.h>

int main_bench(){
	int n;
	int sz[300];
	int nsz[300];
	int i,j,w=1,flag=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	my_printf("%d",sz[0]);
	nsz[0]=sz[0];
	for(i=1;i<n;i++){
		for(j=0;j<w;j++){
			if(sz[i]==nsz[j]){
				flag=1;
			
			}
		}
		if(flag==0){
			nsz[w]=sz[i];
			w++;
			my_printf(",%d",sz[i]);
		}
		flag=0;
	}
	
	return 0;
}