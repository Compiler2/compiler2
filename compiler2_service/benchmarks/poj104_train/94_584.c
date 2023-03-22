#include <header.h>

int main_bench(){
	int N,sz[500];
	my_scanf("%d",&N);
	int i,j,e,d;
	d=0;
	for(i=0;i<N;i++){
		my_scanf("%d",&sz[i]);
	}
	for(j=1;j<=N;j++){
		for(i=0;i<N-j;i++){
			if(sz[i]>sz[i+1]){
				e=sz[i];
				sz[i]=sz[i+1];
				sz[i+1]=e;
			}
		}
	}
	for(i=0;i<N;i++){
		if(sz[i]%2!=0){
			d=i;
			break;
		}
	}
	my_printf("%d",sz[d]);
	for(i=d+1;i<N;i++){
		if(sz[i]%2!=0){
			my_printf(",%d",sz[i]);
		}
	}
	return 0;
}