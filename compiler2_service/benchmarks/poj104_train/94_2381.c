#define NUM_ITER 5812

#include <header.h>

int main_bench(){
    int N,i,m,k,e;
    int a[500];
    my_scanf("%d",&N);
    for(i=0;i<N;i++){
        my_scanf("%d ",&a[i]);
    }
    for(int k=1;k<=N;k++){
        for(i=0;i<N-k;i++){
            if(a[i]>a[i+1]){
                e=a[i+1];
                a[i+1]=a[i];
                a[i]=e;
            }
        }
    }
    int first;
    for(first=0;first<N;first++){
        if(a[first]%2==1){
            my_printf("%d",a[first]);
            break;
        }
    }
    for(i=first+1;i<N;i++){
        if(a[i]%2==1){
            my_printf(",%d",a[i]);
        }
    }
    return 0;
}
