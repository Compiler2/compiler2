#define NUM_ITER 230885

#include <header.h>

int main_bench(){
    int i,m,n,h,l,re;
    int jz[5][5];
    int te[5];
    for(h=0;h<5;h++){
        for(l=0;l<5;l++){
        my_scanf("%d",&jz[h][l]);
        }
    }
    
            
                
            
    
    my_scanf("%d %d",&n,&m);
    if(n>-1&&n<5&&m>-1&&m<5){
        re=1;
    }
    else{
        re=0;
    }
    
    if(re==0){
        my_printf("error");
    }
    else if(re==1){
        for(i=0,l=0;i<5;i++,l++){
            te[i]=jz[n][l];
        }
        for(i=0,l=0;i<5;i++,l++){
            jz[n][l]=jz[m][l];
        }
        for(i=0,l=0;i<5;i++,l++){
            jz[m][l]=te[i];
        }
        for(h=0;h<4;h++){
            for(l=0;l<4;l++){
                my_printf("%d ",jz[h][l]);
            }
            my_printf("%d\n",jz[h][4]);
        }
        for(l=0;l<4;l++){
            my_printf("%d ",jz[4][l]);
        }
        my_printf("%d",jz[4][4]);
    }
    return 0;
}
