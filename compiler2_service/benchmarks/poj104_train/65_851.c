#define NUM_ITER 32381

#include <header.h>

int main_bench(){
   int sz[2000];
   int cz[2000];
   int n,i;
   int sum=0;
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
     my_scanf("%d",&sz[i]);
     my_scanf("%d",&cz[i]);
     if((sz[i]==0&&cz[i]==1)||(sz[i]==1&&cz[i]==2)||(sz[i]==2&&cz[i]==0)){
       sum++;}
     else if((cz[i]==0&&sz[i]==1)||(cz[i]==1&&sz[i]==2)||(cz[i]==2&&sz[i]==0)){
       sum--;}     
   }
   if(sum==0)
    my_printf("Tie");
   else if(sum>0)
    my_printf("A");
   else if(sum<0)
    my_printf("B");
   return 0;
}