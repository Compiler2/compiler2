#define NUM_ITER 53406

#include <header.h>

int main_bench(){
    int n,a,b;
    int sz[2][101];
    my_scanf("%d",&n);
    for(a=0;a<n;a++){
        my_scanf("%d",&sz[0][a]);
    }
    for(a=0;a<n;a++){
        sz[1][a]=sz[0][n-1-a];
        }
    for(b=0;b<n-1;b++){
        my_printf("%d ",sz[1][b]);
    }
    my_printf("%d",sz[1][n-1]);
    return 0;
    
    
}