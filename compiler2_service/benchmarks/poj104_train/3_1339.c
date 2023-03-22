#define NUM_ITER 53615

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
                   if(i==n-2&&m==n-1){
                             my_printf("no");
                             break;
                   }
            }
            if(sz[i]+sz[m]==k){
                             break;
            } 
            if(i==n-2&&m==n-1){
                             break;
            }
      
    }
    return 0;
}

            
            
