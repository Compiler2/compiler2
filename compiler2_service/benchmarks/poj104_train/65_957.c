#include <header.h>

int main_bench(){
    int i,n,A[210],B[210],a=0,b=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d%d",&A[i],&B[i]);
        if((A[i]==0&&B[i]==1)||(A[i]==1&&B[i]==2)||(A[i]==2&&B[i]==0)){
            a=a+1;}
        if((B[i]==0&&A[i]==1)||(B[i]==1&&A[i]==2)||(B[i]==2&&A[i]==0)){
            b=b+1;}
    }
    if(a>b){my_printf("A");}
    if(a<b){my_printf("B");}
    if(a==b){my_printf("Tie");}
    return 0;
}
