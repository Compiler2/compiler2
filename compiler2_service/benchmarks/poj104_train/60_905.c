#define NUM_ITER 18794

#include <header.h>

int main_bench(){
	int n,m;
	int i,j;
	int k=0;
	my_scanf("%d",&n);
	int*sushu=(int*)malloc(sizeof(int)*n);
	for(i=2;i<=n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(j==i){
			sushu[k]=i;
			k++;                                       
		}
	}
	for(i=0;i<=k;i++){
		if(sushu[i+1]-sushu[i]==2){
			my_printf("%d %d\n",sushu[i],sushu[i+1]);
			m=1;
		}
	}
	if(m!=1){
		my_printf("empty");
	}
	free(sushu);
	return 0;
}