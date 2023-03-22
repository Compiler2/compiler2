#define NUM_ITER 59000

#include <header.h>

int main_bench(){
    int n,i,t;
    int max,cmax;
    int sz[100];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
                     my_scanf("%d",&sz[i]);
                     }
                     max=sz[0];
                     cmax=sz[1];
                     for(i=2;i<n;i++){
                                      if(sz[i]>max){
                                                   t=max;
                                                   max=sz[i];
                                                   cmax=t;
                                                   }else if(sz[i]>cmax&&sz[i]<max){
                                                         cmax=sz[i];
                                                         }
                                                         }
                                                         my_printf("%d\n%d\n",max,cmax);
                                                         return 0;
                                                         }