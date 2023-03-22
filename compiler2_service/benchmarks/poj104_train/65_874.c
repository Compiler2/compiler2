#define NUM_ITER 34978

#include <header.h>

int main_bench(){
    int n,a ,b,s;
    s=0;
    my_scanf("%d",&n);
    for(int i=0;i<n;i++){
        my_scanf("%d %d",&a,&b);
        if(b-a==1||a-b==2){
            s=s+1;
        }else if(a==b){
            s=s+0;
        }else{
            s=s-1;
        }
    }
    if(s>0){
        my_printf("A");
    }else if(s==0){
        my_printf("Tie");
    }else{
        my_printf("B");
    }
    return 0;
}
