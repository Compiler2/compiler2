#define NUM_ITER 5875

#include <header.h>

int main_bench(){
    int n,c,k,i=0,d=0;
    my_scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
 my_scanf("%d ",&(a[i]));}
   
 for(k=1;k<=n;k++){
   for(i=0;i<n-k;i++){
       if(a[i]>a[i+1]){
         c=a[i+1];a[i+1]=a[i];a[i]=c;  
       }
   } 
 }
 for(i=0;i<n;i++)
 if(a[i]%2==1)
 d=i;
 
 for(i=0;i<d;i++){
 if(a[i]%2==1){
   my_printf("%d,",a[i]);
   } }
   my_printf("%d",a[d]);
  return 0;
}
