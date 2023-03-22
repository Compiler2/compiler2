#include <header.h>

int main_bench(){
    int n,k,sum=0;
    my_scanf("%d %d",&n,&k);
    int sz[1000];
    for(int i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
    }
    for(int j=0;j<n;j++){
        for(int h=0;h<n;h++){
            if(sz[j]+sz[h]==k){
                sum++;
            }
        }
    }
    if(sum==0){
        my_printf("no");
    }else{
        my_printf("yes");
    }
    return 0;
}
