#include <header.h>

int main_bench()
{
    int sz[1000];
    int n,k;
    int i,j;
    int sum,a=0;
    my_scanf("%d%d\n",&n,&k);
    for(i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
    }
    for(j=0;j<n;j++){
        if(a==1){
            break;
        }else{
        for(i=0;i<n;i++){
            sum=sz[j]+sz[i];
            if((sum==k)&&(i!=j)){
                a=1;
                break;
            }else{
                continue;
            }
         }
        }
    }
    if(a==1){
        my_printf("yes");
    }else{
        my_printf("no");
    }
    return 0;
    
}
