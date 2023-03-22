#include <header.h>

int main_bench()
{
    int n,a=0,b=0,shuzu[111];
    my_scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
                     my_scanf("%d",&shuzu[i]);
                     }
    for(i=0;i<n;i++){
                      if(a<shuzu[i]){
                                       a=shuzu[i] ;
                                       }
                                       }
    my_printf("%d\n",a);
    for(i=0;i<n;i++){
                      if(a==shuzu[i]){    
                                          shuzu[i]=0;  
                                          }
                                          }
    for(i=0;i<n;i++){
                      if(b<shuzu[i]){ 
                                      b=shuzu[i] ; 
                                      }
                                      }
     my_printf("%d",b);     
     return 0;
     }                                                                                            
