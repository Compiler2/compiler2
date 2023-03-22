#define NUM_ITER 35574

#include <header.h>

int main_bench(){
    int n,i,a,b,c,d;
    my_scanf("%d",&n);
    i=1;
    c=0;
    d=0;
    while(i<=n){
        my_scanf("%d%d",&a,&b);
        if(a==b){
            i++;
        }else if(a==0&&b==1){
            c=c+1;
            i++;
        }else if(a==0&&b==2){
            d=d+1;
            i++;
        }else if(a==1&&b==0){
            d=d+1;
            i++;
        }else if(a==1&&b==2){
            c=c+1;
            i++;
        }else if(a==2&&b==0){
            c=c+1;
            i++;
        }else{d=d+1;
        i++;
        }
    }
    if(c>d){
        my_printf("A\n");
    }else if(c==d){
        my_printf("Tie\n");
    }else{my_printf("B\n");}
    return 0;
}
