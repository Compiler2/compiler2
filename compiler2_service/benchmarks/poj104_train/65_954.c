#define NUM_ITER 39986

#include <header.h>

int main_bench(){
    int s=0,t=0,i,j,a,b,n;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d%d",&a,&b);
        if(a==b){
            continue;
        }
        else if(a==0){
            if(b==1){
                s++;
            }
            else {t++;}
        }
        else if(a==1){
            if(b==2){
                s++;
            }
            else {t++;}
        }
        else if(a==2){
            if(b==0){
                s++;
            }
            else t++;
        }
    }
    if(s>t){
        my_printf("A");
    }
    else if(s<t){
        my_printf("B");
    }
    else my_printf("Tie");
    return 0;
}
