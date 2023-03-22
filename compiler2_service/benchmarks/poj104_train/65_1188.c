#define NUM_ITER 34346

#include <header.h>

int main_bench(){
    int n,x,y,a,b,i;
    double z;
    my_scanf("%d",&n);
    x=0;y=0;
    for(i=0;i<n;i++){
        my_scanf("%d%d",&a,&b);
        if(a==2&&b==0){
            x=x+1;
        }else if(a==0&&b==2){
            x=x;
        }else if(a<b){
            x=x+1;
        }else if(a==b){
            y=y+1;
        }
    }
    z=1.0*(n-y)/2;
    if(x>z){
        my_printf("A");
    }else if(x==z){
        my_printf("Tie");
    }else{
        my_printf("B");
    }
    return 0;
}

