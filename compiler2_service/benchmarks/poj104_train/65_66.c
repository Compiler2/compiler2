#define NUM_ITER 37050

#include <header.h>

int main_bench(){
    int n,a,b,i,A=0,B=0;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++){                
                     my_scanf("%d %d",&a,&b);
                     if(a==0){
                              if(b==0){
                                       continue;
                                       }
                              else if(b==1){
                                   A++;
                                   }
                              else{
                                   B++;
                                   }
                              }
                     else if(a==1){
                              if(b==0){
                                       B++;
                                       }
                              else if(b==1){
                                   continue;
                                   }
                              else{
                                   A++;
                                   }
                              }
                     else{
                              if(b==0){
                                       A++;
                                       }
                              else if(b==1){
                                   B++;
                                   }
                              else{
                                   continue;
                                   }
                              }
                     }
    if(A>B){
            my_printf("A");
            }
    else if(A<B){
                 my_printf("B");
                 }
    else{
         my_printf("Tie");
         }
         return 0;
         }
