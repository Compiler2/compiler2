#define NUM_ITER 9493

#include <header.h>

int main_bench(){
	int m=0,n=0,a=0,count=0,num=0;
	my_scanf("%d",&n);
	m=n;
	int *sz=(int *) malloc(sizeof(int) *n);
	for(int i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
		for(int t=0;t<i;t++){
			if(sz[i]==sz[t]){
				a=1;
			}
		}
		if(a==1){
			sz[i]=0;
			m--;
		}
		a=0;
	}
	for(int k=0;k<n;k++){
		if(sz[k]!=0){
			my_printf("%d,",sz[k]);
			count++;
			num=k;
		}
		if(count==(m-1)){
			break;
		}
	}
	for(int j=num+1;j<n;j++){
		if(sz[j]!=0){
			my_printf("%d",sz[j]);
			break;
		}
	}
	return 0;
}