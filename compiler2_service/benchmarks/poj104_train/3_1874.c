#define NUM_ITER 55589

#include <header.h>

int main_bench(){
    int n,k,i,m;
    my_scanf("%d %d",&n,&k);
    int sz[n];
    for(i=0;i<n;i++){
            my_scanf("%d ",&sz[i]);
    }
    for(i=0;i<n-1;i++){
            for(m=i+1;m<n;m++){
                   if(sz[i]+sz[m]==k){
                             my_printf("yes");
                             break;
                   }
            }
            if(sz[i]+sz[m]==k){
                             break;
            }       
    }
    if(sz[i]+sz[m]!=k){
               my_printf("no");
    }
    return 0;
}

