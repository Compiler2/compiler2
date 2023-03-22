#define NUM_ITER 18

#include <header.h>

int main_bench(){
    int a[1000],n[1000],m[1000],i,j,k,l;
    for(i=0;i<998;i++){
        my_scanf("%d%d",&n[i],&m[i]);
        if(n[i]==0){
            break;
        }
    }
    for(l=0;l<998;l++){
        if(n[l]==0){
            break;
        }
        for(i=1;i<=n[l];i++){
            a[i]=1;
        }
        j=0;
        for(i=1;i<=n[l]-1;i++){
            k=0;
            while(k<m[l]){
                j++;
                if(j>n[l]){
                    j=0;
                }
                if(a[j]==1){
                    k++;
                }
            }
            a[j]=0;
        }
        for(i=1;i<=n[l];i++){
            if(a[i]==1){
                my_printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}