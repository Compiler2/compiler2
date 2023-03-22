#define NUM_ITER 22825

#include <header.h>

int main_bench(){
     int n,A[50000],B[50000];
     int b=0,i,a=50000,c=0,j;
     double m;
     my_scanf("%d",&n);
     for(i=0;i<n;i++){
                      my_scanf("%d%d",&A[i],&B[i]); 
                      if(A[i]<a){a=A[i];}
                      if(B[i]>b){b=B[i];}
                                         }
                      for(j=a;j<b;j++){m=j*1.0+0.5;
                                           for(i=0;i<n;i++){
                                                            if(m>A[i]&&m<B[i])
                                                           { c++;break;}}
                                                                         }
                                           if(c==b-a){my_printf("%d %d",a,b);}
                                           else{my_printf("no");}
                                           
                                           return 0;
                                           } 
                                          