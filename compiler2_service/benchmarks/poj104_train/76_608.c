#define NUM_ITER 4118

#include <header.h>

int main_bench(){
    int n,i,j,e,a;
    my_scanf("%d",&n);
    int x[n],y[n];
    for(i=0;i<n;i++){
        my_scanf("%d %d",&x[i],&y[i]);
    }
    for(j=1;j<=n;j++){
        for(i=0;i<n-j;i++){
            if(x[i]>x[i+1]){
                e=x[i];
                x[i]=x[i+1];
                x[i+1]=e;
            }
            if(y[i]>y[i+1]){
                e=y[i];
                y[i]=y[i+1];
                y[i+1]=e;
            }
        }
    }
    a=0;
    for(i=0;i<n-1;i++){
        if(x[n-i-1]>y[n-i-2]||y[i]<x[i+1]){
              a++;
        }
    }
    if(a!=0){
        my_printf("no");
    }
    else{
        my_printf("%d %d",x[0],y[n-1]);
    }
    return 0;
}