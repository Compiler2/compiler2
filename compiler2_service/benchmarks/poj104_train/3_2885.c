#include <header.h>

int main_bench(){
    int n,k,y;
    int sz[1000];
    my_scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
    }
    for(int t=0;t<(n-1);t++){
        for(int x=t+1;x<n;x++){
            y=(sz[t])+(sz[x]);
            if(y==k){
                my_printf("yes");
                break;
            }
            if(y!=k&&t!=(n-2)){
                continue;
            }
            if(y!=k&&t==(n-2)){
                my_printf("no");
            }
        }
        if(y==k||y!=k&&t==(n-2)){
            break;
        }
    }
    return 0;
}
