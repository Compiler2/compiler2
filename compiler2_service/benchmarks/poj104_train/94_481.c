#define NUM_ITER 16313

#include <header.h>



int main_bench()
{
     int i,n,sz[1000],x,k;
    int j=0,a=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
                     my_scanf("%d",&x);
                     if((x%2)!=0){
                                  sz[j]=x;
                                  j++;
                                  a++;
                                  }
                                  }
       for(k=1;k<=a;k++){
                         for(j=0;j<a-k;j++){
                                          if(sz[j]>sz[j+1]){
                                                            int e;
                                                            e=sz[j+1];
                                                            sz[j+1]=sz[j];
                                                            sz[j]=e;
                                                            }
                                                            }
                                                            }
       my_printf("%d",sz[0]);
       for(j=1;j<a;j++){
                        my_printf(",%d",sz[j]);
                        }
                                  
   

   
   return 0;
   }