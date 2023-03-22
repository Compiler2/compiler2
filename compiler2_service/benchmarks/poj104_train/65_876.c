#define NUM_ITER 34000

#include <header.h>

int main_bench(){
    int n;
    my_scanf("%d",&n);
    int A[n], B[n];
    for(int i=0;i<n;i++){
        my_scanf("%d %d",&A[i], &B[i]);
    }
    int x=0, y=0;
    for(int i=0;i<n;i++){
        if((A[i]==0&&B[i]==1)||(A[i]==1&&B[i]==2)||(A[i]==2&&B[i]==0)){
            x=x+1;
        }
        if((B[i]==0&&A[i]==1)||(B[i]==1&&A[i]==2)||(B[i]==2&&A[i]==0)){
            y=y+1;
        }
    }
    if(x>y){
        my_printf("A");
    }
    if(x<y){
        my_printf("B");
    }
    if(x==y){
        my_printf("Tie");
    }
    return 0;
}
