#include <header.h>

int main_bench(){
    int n,A=0,B=0,i;
    my_scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        my_scanf("%d %d",&a[i],&b[i]);
        if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
            A++;
        }else if(a[i]==b[i]){
            continue;
        }else{
            B++;
        }
    }
    if(A>B){
        my_printf("A");
    }else if(A<B){
        my_printf("B");
    }else{
        my_printf("Tie");
    }
    return 0;
}
