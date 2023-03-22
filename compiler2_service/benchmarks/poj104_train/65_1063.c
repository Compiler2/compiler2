#include <header.h>

int main_bench(){
	int N;
	int i;
	int A[200],B[100];
	int a,b;
	a=0;
	b=0;

	my_scanf("%d",&N);
	for(i=0;i<N;i++){
	my_scanf("%d %d",&A[i],&B[i]);
	if((A[i]==0&&B[i]==1)||(A[i]==1&&B[i]==2)||(A[i]==2&&B[i]==0)){
	a=a+1;
	}else if((B[i]==0&&A[i]==1)||(B[i]==1&&A[i]==2)||(B[i]==2&&A[i]==0)){
	b=b+1;
	}else if((A[i]==0&&B[i]==0)||(A[i]==1&&B[i]==1)||(A[i]==2&&B[i]==2)){
         continue;
	}
	}
	if(a>b){
	my_printf("A");
	}else if(a==b){
		my_printf("Tie");
	}else {
	my_printf("B");
	}

		return 0;
}
