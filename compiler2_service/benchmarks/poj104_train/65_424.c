#include <header.h>

int main_bench(){
	int n,i;
	int A[200],B[200];
	int countA=0,countB=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&A[i],&B[i]);
		if((A[i]-B[i]==-1)||(A[i]-B[i]==2)){
			countA++;
		}else if((A[i]-B[i]==1)||(A[i]-B[i]==-2)){
			countB++;
		}
	}
	if(countA>countB) {
		my_printf("A");
	}else if(countB>countA){
		 my_printf("B");
	}else {
		my_printf("Tie");
	}
	return 0;
}
