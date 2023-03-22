#include <header.h>

int main_bench(){
    int n,i,a,b,aa=0,bb=0,pp=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d%d",&a,&b);
        if(a==b-1||a==b+2){
            aa=aa+1;
        }else{
            if(a==b){
                pp=pp+1;
            }else{
                bb=bb+1;
            }
        }
    }
    if(aa>bb){
        my_printf("A");
    }else{
        if(aa==bb){
            my_printf("Tie");
        }else{
            my_printf("B");
        }
    }
    return 0;
}
