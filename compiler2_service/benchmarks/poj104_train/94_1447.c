#define NUM_ITER 18273

#include <header.h>

int main_bench(){
 int N,i,t,j;
 int sum=0; 
 my_scanf("%d",&N);
 int a[N];
 for(i=0;i<N;i++){
   my_scanf("%d ",&a[i]);
 }
int b[sum];
   for(i=0;i<N;i++){
      if(a[i]%2!=0)
      {
       sum++; 
       b[sum-1]=a[i];
      }
   }
for(j=0;j<sum-1;j++) {
   for(i=0;i<sum-j-1;i++){
       if(b[i]>b[i+1]){
           t=b[i];
           b[i]=b[i+1];
           b[i+1]=t;
       }
    }
   }
   for(i=0;i<sum-1;i++){
   my_printf("%d,",b[i]);}
   my_printf("%d",b[sum-1]);
 return 0;
}