#define NUM_ITER 31703

#include <header.h>

int main_bench(){
    int n,x,y,s=0;
    my_scanf("%d",&n);
    for(int i=0;i<n;i++){
        my_scanf("%d %d",&x,&y);
        if((x==0&&y==1)|(x==1&&y==2)|(x==2&&y==0)){
            s++;
        }else if(x==y){
        }else{
            s--;
        }
    }
    if(s==0){
        my_printf("Tie");
    }
    if(s>0){
        my_printf("A");
    }
    if(s<0){
        my_printf("B");
    }
    return 0;
}