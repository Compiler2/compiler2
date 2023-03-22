#define NUM_ITER 3008

#include <header.h>

int main_bench(){
     int a[10000];
     int i,n,m,j;
     my_scanf("%d",&n);
     for(i=0;i<n;i++){
         my_scanf("%d",&(a[i]));
     }
     for(i=0;i<n;i++){
         for(j=0;j<n;j++){
             if(a[i]<a[j]){
                 m=a[i];
                 a[i]=a[j];
                 a[j]=m;
             }
         }
     }
 for(i=0;i<n;i++){
   if(a[i]%2==0){
       a[i]=0;
   }
 } 
 if(a[0]!=0){
     my_printf("%d",a[0]);
 }
 for(i=1;i<n;i++){
     if(a[i]!=0){
         my_printf(",%d",a[i]);
     }
 }
     return 0;
 }

