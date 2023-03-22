#include <header.h>

int main_bench(){
    int n;
    int k;
    my_scanf("%d ",&n);
    my_scanf("%d",&k);
    int sz[n];
    for(int i=0;i<n;i++){
        my_scanf("%d ",&sz[i]);
    }
    int x=0;
    for(int i=0;i<n;i++){
        for(int m=0;m<n;m++){
            if(sz[m]+sz[i]==k){
              x++;  
            }
            else{
                continue;
            }
        }
    }
    if (x>0){
        my_printf("yes");
    }
    else{
        my_printf("no");
    }
    return 0;
}
