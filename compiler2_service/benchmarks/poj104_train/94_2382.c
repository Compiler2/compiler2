#define NUM_ITER 18766

#include <header.h>

int main_bench(){
    int n,i,k,f,g;
    my_scanf("%d",&n);
    int A[n],B[n];
    i=0,k=0;
    while(i<n){
        my_scanf("%d",&A[i]);
        if(A[i]%2!=0){
            B[k]=A[i];
            k++;
        }
        i++;
    }
    i=0;
    f=0;
    while(f<k){
        i=0;
        while(i<k-f-1){
            if(B[i]>B[i+1]){
                g=B[i+1];
                B[i+1]=B[i];
                B[i]=g;
            }
            i++;
        }
        f++;
    }
    i=0;
    while(i<k-1){
       my_printf("%d,",B[i]);
       i++;
    }
    my_printf("%d",B[k-1]);
    return 0;
}
