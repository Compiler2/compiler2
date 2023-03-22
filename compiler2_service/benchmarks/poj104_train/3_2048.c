#include <header.h>

   int main_bench(){
   int n,i,m,k,b,g;
   my_scanf("%d %d",&n,&k);
   int a[n];
   for(i=0;i<n;i++){
      my_scanf("%d",&a[i]);
      }
      for(i=1;i<n;i++){
      for(m=0;m<i;m++){
      if(a[i]+a[m]==k){
           b=k;              
           my_printf("yes");
           return 0;
           }
         }
       if(i==n-1&&b!=k){
         my_printf("no");
         }
       }
       return 0;
} 
   
