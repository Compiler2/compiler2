#define NUM_ITER 45871

#include <header.h>

int shuzu[1000000];
int main_bench(){
    int n,k,x,num=0;
    my_scanf("%d",&n);
    for (int t=0;t<n;t++){
        my_scanf("%d",&shuzu[t]);
    }
    my_scanf("%d",&k);
    for (int j=0;j<n;j++){
           if (shuzu[j]==k){
                for (int i=j;i<=n-1;i++){
                      x=shuzu[i];
                      shuzu[i]=shuzu[i+1];
                      shuzu[i+1]=x;
                }
                n--;
               if (shuzu[j]==k){
                    j=j-1;
              }
           }
    }          
    for (int m=0;m<n;m++){
            if (m==0){
            my_printf("%d",shuzu[m]);
            }
            else {
                   my_printf(" %d",shuzu[m]);    
                   }
    } 
return 0;    
}