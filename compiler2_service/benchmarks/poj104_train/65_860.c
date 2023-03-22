#define NUM_ITER 37027

#include <header.h>

int main_bench(){
    int n,a=0,b=0,x,y;
    my_scanf("%d",&n);
    for(int i=0;i<n;i++){
        my_scanf("%d%d\n",&x,&y);
        if(x-y==1||(x==0&&y==2)){
            b++;
        }
         if(y-x==1||(y==0&&x==2)){
            a++;
        }
    }
    if(a>b){
        my_printf("A");
    }
    else if(a<b){
        my_printf("B");
    }
    else{
        my_printf("Tie");
    }
    return 0;
}
