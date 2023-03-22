#include <header.h>

int main_bench(){
    int n,k,z[1000],i,j;
    my_scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        my_scanf("%d",&z[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(z[i]+z[j]==k){
                if(i!=j){
                    my_printf("yes");
                    return 0;
                }else{continue;}
            }
        }
    }
    my_printf("no");
    return 0;
}
