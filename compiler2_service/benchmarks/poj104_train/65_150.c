#define NUM_ITER 35687

#include <header.h>

int main_bench(){
    int n,i,o=0 ,p=0,q=0;
   my_scanf("%d",&n);
    int a[n],b[n];
   for(i=o;i<n;i++){
      my_scanf("%d %d",&a[i],&b[i]);
    if(a[i]==0&&b[i]==1||a[i]==1&&b[i]==2||a[i]==2&&b[i]==0){
       o++;
      }else if(a[i]==b[i]){
           p++;
      }else{
      q++;     
      }
}
      if(o>q){
      my_printf("A");
     }else if(o<q){
     my_printf("B");
     }else{
     my_printf("Tie");
     }
     return  0;
}   
