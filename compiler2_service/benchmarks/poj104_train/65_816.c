#define NUM_ITER 38114

#include <header.h>

int main_bench(){
	int n,i,a=0,b=0;
	my_scanf("%d",&n);
	int A[200][200];
	for(i=0;i<n;i++){
		my_scanf("%d%d",&A[i][0],&A[i][1]);
	}
	for(i=0;i<n;i++){
		if(A[i][0]==0){
			if(A[i][1]==1){
				a++;
			}
			if(A[i][1]==2){
				b++;
			}
		}
		if(A[i][0]==1){
			if(A[i][1]==0){
				b++;
			}
			if(A[i][1]==2){
				a++;
			}
		}
		if(A[i][0]==2){
			if(A[i][1]==0){
				a++;
			}
			if(A[i][1]==1){
				b++;
			}
		}
	}

	if(a>b){
		my_printf("A");
	}
	if(a<b){
		my_printf("B");
	}
	if(a==b){
		my_printf("Tie");
	}
	return 0;
}