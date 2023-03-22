#include <header.h>

int main_bench(){
    int n,i,b=0,a=0;
    my_scanf("%d",&n);
    int A[n],B[n];
    for(i=0;i<n;i++){
        my_scanf("%d%d",&A[i],&B[i]);
    }
    for(i=0;i<n;i++){
        if((A[i]==0&&B[i]==1)||(A[i]==1&&B[i]==2)||(A[i]==2&&B[i]==0)){
            a++;
        }
    }
    for(i=0;i<n;i++){
        if((A[i]==0&&B[i]==2)||(A[i]==1&&B[i]==0)||(A[i]==2&&B[i]==1)){
            b++;
        }
    }
    if(a>b){
        my_printf("A");
    }else if(a==b){
        my_printf("Tie");
    }else if(a<b){
        my_printf("B");
    }
    return 0;
}
