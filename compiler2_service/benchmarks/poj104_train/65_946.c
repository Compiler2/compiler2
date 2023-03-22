#define NUM_ITER 37692

#include <header.h>

int main_bench(){
    int n,i,k,a[201],b[201];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d%d",&a[i],&b[i]);
    }
    k=0;
    for(i=0;i<n;i++){
        if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
            k+=1;
        }else if(a[i]==b[i]){
            k+=0;
        }else{
            k-=1;
        }
    }
    if(k>0){
        my_printf("A");
    }else if(k==0){
        my_printf("Tie");
    }else{
        my_printf("B");
    }
    return 0;
}

