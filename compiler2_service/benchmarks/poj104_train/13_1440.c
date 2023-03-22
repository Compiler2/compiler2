#define NUM_ITER 13668

#include <header.h>

   int main_bench(){
   int n,i,j,k;
   k=0;
   my_scanf("%d",&n);
   int a[n],b[n];
   for(i=0;i<n;i++){
      my_scanf("%d",&a[i]);
      }
   for(j=0;j<n-1;j++){
      if(a[j]!=100){
      for(i=j+1;i<n;i++){
          if(a[i]==a[j]){
            a[i]=100;
            }
            }
            }
            }
   my_printf("%d",a[0]);
   for(i=1;i<n;i++){
      if(a[i]!=100){
        my_printf(" %d",a[i]);
        }
        }
   my_scanf("%d",&n);
   return 0;
}
      
    
