#define NUM_ITER 55810

#include <header.h>

void Exchange(int A[],int n);

int main_bench(){
    int n;
    my_scanf("%d",&n);
    int A[n];
    Exchange(A,n);
    return 0;
}


void Exchange(int A[],int n){
    for(int i=0;i<n;i++){
        my_scanf("%d",&A[i]);
    }
    my_printf("%d",A[n-1]);
    for(int j=n-2;j>=0;j--){
        my_printf(" %d",A[j]);
    }
}


