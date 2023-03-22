#define NUM_ITER 4804

#include <header.h>

int main_bench(){
  int n,k,i,j,s=0;
  my_scanf("%d%d",&n,&k);
  int a[n];
  for(i=0;i<n;i++){
      my_scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
          if(i==j){
             j++;
          }
          if(a[i]+a[j]==k){
             s++;
          }
      }
   }
   if(s==0){
      my_printf("no");
   }else{
      my_printf("yes");
   }
   return 0;
}