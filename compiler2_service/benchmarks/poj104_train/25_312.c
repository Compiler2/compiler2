#define NUM_ITER 160787

#include <header.h>

int main_bench(){
    int n,i;
    double y,a;
    my_scanf("%d",&n);
    if(n>0){
            a=1.0;
            for(i=0;i<n;i++){
                             y=a*2;
                             a=y; 
                             }
                             }
                          if(n==0){
                                   y=1.0;
                                   }  
                                   my_printf("%.0lf",y);
                                                                      return 0;
                                   }  