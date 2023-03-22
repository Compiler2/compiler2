#define NUM_ITER 7695

#include <header.h>

int main_bench(){
    int n;
    my_scanf("%d",&n);
    int *SZ=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        my_scanf("%d",&SZ[i]);
        }
    for(int j=0;j<n;j++){
        if(j==0){
           my_printf("%d",SZ[j]);
           }   
        for(int k=0;k<j;k++){
            if(SZ[j]==SZ[k]){
               break;
               }else if(k==j-1){
                my_printf(" %d",SZ[j]);
               }
            }
        }
    return 0;
}