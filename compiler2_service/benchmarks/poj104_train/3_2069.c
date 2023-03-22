#define NUM_ITER 61559

#include <header.h>

int main_bench(){
    int n,k,i,j,x[1000];
    my_scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
           my_scanf("%d",&x[i]);
    }
    
    for(j=0;j<n;j++){
            for(i=j+1;i<=n;i++){
                   if(x[j]+x[i]==k){
                          my_printf("yes");
                          return 0;
                   }
            }
    }
    my_printf("no");
    
    my_scanf("%d %d",&n,&k);                
    return 0;
}