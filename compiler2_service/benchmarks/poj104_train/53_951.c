#define NUM_ITER 6353

#include <header.h>

int main_bench(){
    int n, i, j, m=0;
    my_scanf("%d", &n);
    int su[300];
    for(i=0;i<n;i++){
    my_scanf("%d", &(su[i]));
   }
  
    for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
         if(su[i]==su[j]){
           su[j]=-10;          
           }                
         }
      }
      my_printf("%d", su[0]); 
      for(i=1;i<n;i++){
       if(su[i]!=-10){
        my_printf(",%d", su[i]);              
                      }               
                       }

    return 0;
}