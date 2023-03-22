#define NUM_ITER 4590

#include <header.h>

int main_bench(){
	int a[5000],b[5000],sz[5000],n,N,flag,i,max,min;
	my_scanf("%d",&N);
	flag=1;
	for(i=0;i<5000;i++){
		sz[i]=0;
	}
	for(n=0;n<N;n++){
		my_scanf("%d %d",&a[n],&b[n]);
		for(i=a[n];i<b[n];i++){
			sz[i]=1;
		}
	}
          min=a[0];
          max=b[0];
	for(n=1;n<N;n++){
		if(a[n]<min){
			min=a[n];
		}
		if(b[n]>max){
			max=b[n];
		}
	}
	for(i=min;i<max;i++){
		if(sz[i]==0){
			my_printf("no");
			flag=0;
			break;
		}
	} if(flag){
		my_printf("%d %d",min,max);
	}
	return 0;
}
