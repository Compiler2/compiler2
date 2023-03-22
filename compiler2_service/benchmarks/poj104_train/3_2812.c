#define NUM_ITER 3275

#include <header.h>

int main_bench(){
    int n,sz[1000],k,s,i,j;
    my_scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
    }
    s=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(((sz[i]+sz[j])==k)&&(i!=j)){
                s=s+1;
            }
        }
    }
   if(s>0){
        my_printf("yes\n");
    }
        if(s==0){
        my_printf("no\n");
    }
    return 0;
}





