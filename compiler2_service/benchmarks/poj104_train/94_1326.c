#define NUM_ITER 2758

#include <header.h>

int main_bench(){
	int N,sz[501],i=0,j=0,e,k=1,m;
	my_scanf("%d",&N);
	for(i=0;i<N;i++){
	my_scanf("%d",&sz[i]);
	}
	for(k=0;k<=N;k++){
		for(j=0;j<N;j++){
			if(sz[j]>sz[j+1]){
			e=sz[j+1];
			sz[j+1]=sz[j];
			sz[j]=e;
			}
		}
	}
	m=0;
	for(j=0;j<=N;j++){
		if(sz[j]%2==1){
			if(m==0){
				my_printf("%d",sz[j]);
			}else{
			my_printf(",%d",sz[j]);}
		m++;
		}
	}
return 0;
}