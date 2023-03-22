#define NUM_ITER 37486

#include <header.h>

int main_bench(){
	int i,a=0,b=0,n,A[200],B[200];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&A[i],&B[i]);
	}
	for(i=0;i<n;i++){
		if(A[i]==B[i]){
			a++;
			b++;
		}else if((A[i]-B[i]==-1)||(A[i]-B[i]==2)){
			a++;
		}else{
			b++;
		}
	}
	if(a>b){
		my_printf("A");
	}else if(a<b){
		my_printf("B");
	}else{
		my_printf("Tie");
	}
	return 0;
}