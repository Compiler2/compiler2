#include <header.h>

int main_bench(){
    int n,sz[100];
    my_scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i!=n-1){
            my_scanf("%d ",&sz[i]);
        } else{
            my_scanf("%d",&sz[i]);
        }
    }
    for(int j=n-1;j>=0;j--){
        if(j!=0){
            my_printf("%d ",sz[j]);
        } else{
            my_printf("%d",sz[j]);
        }
    }
    return 0;
}


