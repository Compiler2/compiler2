#include <header.h>

int main_bench(){
	int n,k,i;
	my_scanf("%d%d",&n,&k);
	int sz[1000],x=0;
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(sz[i]+sz[j]==k){
				x=1;
				break;
			};
			
		}
	}
	if(x==1){
		my_printf("yes\n");
	}else{my_printf("no\n");}
return 0;
}