#define NUM_ITER 4261

#include <header.h>

int main_bench(){
	int n,i,j,k=0;
	my_scanf("%d",&n);
	int *zs;
	zs=(int*)malloc(sizeof(int)*n);
	for(i=3;i<=n;i++){
		int c=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				c++;
			}
		}
		if(c==0){
			zs[k]=i;
			k++;
		}
	}
	int count=0;
	for(i=0;i<k;i++){
		for(j=i;j<k;j++){
			if(zs[j]-zs[i]==2){
				count++;
				my_printf("%d %d\n",zs[i],zs[j]);
			}
		}
	}
	if(count==0){
		my_printf("empty");
	}
	free(zs);
	return 0;
}