#include <header.h>

int main_bench(){
    int n,k;
    my_scanf("%d%d",&n,&k);
    int sz[n];
    for(int i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int s=i+1;s<n;s++){
            if(sz[i]+sz[s]==k){
                my_printf("yes");return 0;
            }
            if(sz[i]+sz[s]!=k&&i==n-2){
                my_printf("no");return 0;
            }
        }
    }
}

