#define NUM_ITER 36786

#include <header.h>

int main_bench(){
    int n,i,a,b,A,B;
    A=0;
    B=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d %d",&a,&b);
        if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
            A++;
        }else if((a==1&&b==0)||(a==2&&b==1)||(a==0&&b==2)){
            B++;
        }
    }
    if(A==B){
        my_printf("Tie");
    }else if(A>B){
        my_printf("A");
    }else if(A<B){
        my_printf("B");
    }
    return 0;
}