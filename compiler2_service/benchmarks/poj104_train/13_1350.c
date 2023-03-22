#define NUM_ITER 6278

#include <header.h>

int shuzu[20000];
int main_bench(){
    int n,x;
    my_scanf("%d",&n);
    for (int t=0;t<n;t++){
        my_scanf("%d",&shuzu[t]);
    }
    for (int j=0;j<n;j++){
        for (int i=j+1;i<n;i++){
           if (shuzu[i]==shuzu[j]){
                     shuzu[i]=0;
                }
           }
    }          
    for (int m=0;m<n;m++){
        if (shuzu[m]!=0){
            if (m==0){
            my_printf("%d",shuzu[m]);
            }
            else {
                   my_printf(" %d",shuzu[m]);    
                   }
        }
    } 
return 0;    
}