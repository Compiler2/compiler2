#define NUM_ITER 39349

#include <header.h>

int main_bench(){
    int n,a,b,i,c,d,e;
    my_scanf("%d",&n);
    d=0;
    e=0;
    for(i=0;i<n;i++){
        my_scanf("%d%d",&a,&b);
        c=a-b;
        if(c==-1||c==2){
            d++;
        }else{if(c!=0){
            e++;}
        }
    }if(d>e){
        my_printf("A");
    }else{
        if(d<e){
            my_printf("B");
        }else{
            my_printf("Tie");
        }
    }
    return 0;
}
