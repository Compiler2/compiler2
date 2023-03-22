#define NUM_ITER 5175

#include <header.h>

int main_bench() {
	int n,sz[501];
	my_scanf("%d",&n);
	int i,j,a;
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	for(i=1;i<=n;i++){
		for(j=0;j<n-i;j++){
			if(sz[j]>sz[j+1]){
				a=sz[j+1];
				sz[j+1]=sz[j];
				sz[j]=a;
			}
		}
	}
	j=0;
	while(sz[j]%2==0){
		j+=1;
	}
	my_printf("%d",sz[j]);
	for(j=j+1;j<n;j++){
		if(sz[j]%2!=0){
			my_printf(",%d",sz[j]);
		}
	}
	return 0;
}