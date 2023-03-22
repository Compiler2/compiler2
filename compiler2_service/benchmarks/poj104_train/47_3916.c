#include <header.h>


int main_bench(){
    int n,num[100],i,a,j,b;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
                     my_scanf("%d",&num[i]);
                     }
                     if(n%2!=0){
                               b=(n-1)/2;
                               }
                     else{
                          b=n/2;
                          }
                    for(i=0;i<b;i++){
                                                          a=num[i];
                                                          num[i]=num[n-i-1];
                                                          num[n-i-1]=a;
                                                          }
                                                                                                                    
                                                          for(i=0;i<n-1;i++){
                                                          my_printf("%d ",num[i]);
                                                          }
                                                          my_printf("%d",num[n-1]);

                                                          return 0;
                                                          }
                                                          