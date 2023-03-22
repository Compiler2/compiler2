#define NUM_ITER 37637

#include <header.h>

int main_bench(){
    int a,b,n,i;
    my_scanf("%d",&n);
    int z[n],x[n];
    for(i=0;i<n;i++){
        my_scanf("%d%d",&z[i],&x[i]);
    }
    a=0;
    b=0;
    for(i=0;i<n;i++){
        if(z[i]==0&&x[i]==2){
            b++;
        }
        else if(z[i]==2&&x[i]==0){
            a++;
        }
        else if(z[i]<x[i]){
            a++;
        }
        else if(z[i]>x[i]){
            b++;
        }
    }
    if(a>b){
        my_printf("A");
    }
    else if(a<b){
        my_printf("B");
    }
    else if(a==b){
        my_printf("Tie");
    }
    return 0;
}
