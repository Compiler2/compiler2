#define NUM_ITER 16819

#include <header.h>

   int main_bench(){
   int n,i,d,k,c,j,e;
   my_scanf("%d",&n);
   int a[n],b[100];
   d=0;
   c=0;
   for(i=0;i<n;i++){
       my_scanf("%d",&a[i]);
       }
   for(i=0;i<n;i++){
       if(a[i]%2!=0){
          d++;
          }
       }
   for(k=0;k<d;k++){
       for(i=c;i<n;i++){
          if(a[i]%2!=0){
             b[k]=a[i];
             c=i+1;
             break;
             }
          c=i+1;
          }
       }                    
   for(i=0;i<d-1;i++){
      for(k=0;k<d-i-1;k++){
         if(b[k]>b[k+1]){
           e=b[k];            
           b[k]=b[k+1];
           b[k+1]=e;
           }
      }
      }
    for(i=0;i<d;i++){
       if(i!=d-1){
       my_printf("%d,",b[i]);
       }
       else{
       my_printf("%d",b[i]);     
       }
       } 
       my_scanf("%d",&n);  
    return 0;
}