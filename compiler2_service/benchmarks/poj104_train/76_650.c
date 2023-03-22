#define NUM_ITER 986

#include <header.h>

int main_bench(){
   int n,a[50000],b[50000],c[10000],i,j,s,min,max;
   my_scanf("%d\n",&n);
   for(i=0;i<n;i++){
      my_scanf("%d %d\n",&a[i],&b[i]);
   }
   min=a[0];
   for(i=0;i<n;i++){
      if(a[i]<min){
         min=a[i];
      }
   }
   max=b[0];
   for(i=0;i<n;i++){
      if(b[i]>max){
         max=b[i];
      }
   }
   for(i=min*2;i<=max*2;i++){
      c[i]=1;
   }
   for(i=0;i<n;i++){
      for(j=min*2;j<=max*2;j++){
         if(j/2>=a[i]&&1.0*j/2<=b[i]){
            c[j]=0;
         }
      }
   }
   for(i=min*2,s=0;i<=max*2;i++){
      s+=c[i];
   }
   if(s==0){
      my_printf("%d %d",min,max);
   }else{
      my_printf("no");
   }
   return 0;
}