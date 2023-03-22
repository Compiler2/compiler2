#define NUM_ITER 2516

#include <header.h>

int main_bench(){
	int n,i,min,max=0,j=1,k,t=0;
	int a[10001][2];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i][0],&a[i][1]);
	}
	min=a[0][0];
	for(i=0;i<n;i++){
		for(k=0;k<(n-1);k++){
			if(a[k][0]>a[k+1][0]){
				t=a[k][0];
				a[k][0]=a[k+1][0];
				a[k+1][0]=t;
				
			}
			if(a[k][1]>a[k+1][1]){
				t=a[k][1];
				a[k][1]=a[k+1][1];
				a[k+1][1]=t;
			}

		}
	}
	for(i=0;i<n;i++){
		if(a[i][1]>max){
			max=a[i][1];
		}
		if(a[i][0]<min){
			min=a[i][0];
		}
	}
	for(i=1;i<n;i++){
		if(a[i-1][1]<a[i][0]){
			j=0;
			break;
		}
		
	}
	if(j==0){
		my_printf("no\n");
	}else{
		my_printf("%d %d",min,max);
	}
	return 0;
}