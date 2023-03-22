#define NUM_ITER 17183

#include <header.h>

int main_bench(){
    int N,sz[500],j=0,e,yz[500];
    my_scanf("%d",&N);
    for(int i=0;i<N;i++){
        my_scanf("%d",&sz[i]);
    }
    for(int i=0;i<N;i++){
        if(sz[i]%2!=0){
            yz[j]=sz[i];
            j++;
        }
    }
    for(int p=1;p<j;p++){
        for(int q=0;q<j-p;q++){
            if(yz[q]>yz[q+1]){
                e=yz[q+1];
                yz[q+1]=yz[q];
                yz[q]=e;
            }
        }
    }
    for(int t=0;t<j;t++){
        if(t!=j-1){
            my_printf("%d,",yz[t]);
        } else{
            my_printf("%d",yz[t]);
        }
    }
    return 0;
}

