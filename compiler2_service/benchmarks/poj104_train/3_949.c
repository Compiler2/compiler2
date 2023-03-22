#define NUM_ITER 61141

#include <header.h>

int main_bench(){
	int n,a,b,c,d,e,f,i,j,m;
    int sz[5000];
	my_scanf("%d%d",&n,&m);
	
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);	
	}
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if((sz[i]+sz[j])==m){
				my_printf("yes");
				return 0;
			}
		}
	}
	my_printf("no");
	return 0;
}
