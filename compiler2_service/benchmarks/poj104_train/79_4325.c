#define NUM_ITER 1676

#include <header.h>

int main_bench(){
    int a[3000],b[3000],c[3000],x=0,i,j,s;
    for(j=0;j<3000;j++){ 
         s=0;
       my_scanf("%d%d",&a[j],&b[j]);
      if(a[j]==0) break;
       else{
         for (i=2; i<=a[j]; i++) s=(s+b[j])%i;
           x++;
           c[j]=s+1;
           } 
      }
      for(j=0;j<x;j++){
         my_printf("%d\n",c[j]);
      }
       return 0;
   }
      