#define NUM_ITER 16189

#include <header.h>

void paixu(int n,int A[]);
int main_bench(){
	int n=0,i,N;
	int a[500];
	int A[500];
	my_scanf("%d",&N);
	for(i=0;i<N;i++){
		my_scanf("%d",&a[i]);
		if(a[i]%2!=0){
			A[n]=a[i];
			n++;
		}
	}
	paixu(n,A);
	for(i=0;i<n-1;i++){
		my_printf("%d,",A[i]);
	}
	my_printf("%d",A[n-1]);
	return 0;
}
void paixu(int n,int A[]){
	int i,t,j;
	for(i=0;i<n;i++){
		for(j=n-1;j>=i;j--){
			if(A[j]<A[j-1]){
				t=A[j-1];
				A[j-1]=A[j];
				A[j]=t;
			}
		}
	}
}