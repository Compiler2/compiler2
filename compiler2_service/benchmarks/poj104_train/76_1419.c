#include <header.h>

int main_bench(){
    int n,m,a;
    my_scanf("%d\n",&n);
    int sz[n],zs[n];
    for(int i=0;i<n;i++){
        my_scanf("%d%d",&sz[i],&zs[i]);
    }
    for(int x=0;x<n-1;x++){
    for(int i=0;i<n-1-x;i++){
        if(sz[i]>sz[i+1]){
            m=sz[i];
            sz[i]=sz[i+1];
            sz[i+1]=m;
        }
    }
    }
    for(int x=0;x<n-1;x++){
        for(int i=0;i<n-1;i++){
        if(zs[i]>zs[i+1]){
            m=zs[i];
            zs[i]=zs[i+1];
            zs[i+1]=m;
        }
    }
    }
    a=1;
    for(int i=0;i<n-1;i++){
        if(zs[i]<sz[i+1]){
            a=0;
        }
    }
    if(a==1){
        my_printf("%d %d",sz[0],zs[n-1]);
    }else{
        my_printf("no");
    }
    return 0;
}
