#define NUM_ITER 218206

#include <header.h>

int main_bench(){
    int sz[5][5];
    
    for(int a=0;a<5;a++){
        for(int b=0;b<5;b++){
            my_scanf("%d",&sz[a][b]);
        }
    }
    int m,n,e;
    my_scanf("%d %d",&m,&n);
    if(m<=4&&m>=0&&n<=4&&n>=0){
        for(int b=0;b<5;b++){
           e=sz[n][b];
            sz[n][b]=sz[m][b];
            sz[m][b]=e;
        }
        for(int a=0;a<5;a++){
            for(int b=0;b<4;b++){
                my_printf("%d ",sz[a][b]);
            }
                my_printf("%d\n",sz[a][4]);
            }
        }
    else{my_printf("error");}
    return 0;
}
