#define NUM_ITER 53105

#include <header.h>

int main_bench(){
    int n,k;
    my_scanf("%d%d",&n,&k);
    int sz[n];
    for(int i=0;i<n;i++){
        my_scanf("%d",&(sz[i]));
    }
    for(int a=1;a<n;a++){
        for(int i=0;i<n&&i!=(n-a);i++){
            if(((sz[i])+(sz[n-a]))==k){
                my_printf("yes");
                return 0;}
        else if(a==n-1&&((sz[i])+(sz[n-a]))!=k){
         my_printf("no"); 
         return 0;
        }}}
}


