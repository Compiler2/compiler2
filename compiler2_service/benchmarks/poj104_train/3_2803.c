#define NUM_ITER 3161

#include <header.h>

int main_bench(){
    int n,k,x;
    x=0;
    my_scanf("%d%d",&n,&k);
    int sz[n];
    for (int i=0;i<n;i++){
        my_scanf("%d",&(sz[i]));
    }
    for(int i=0;i<n;i++){
        for(int a=0;a<n;a++){
            if(sz[i]+sz[a]==k&&i!=a){x++;}
        }
    }
    if(x==0){my_printf("no");}
    else{my_printf("yes");}
}



