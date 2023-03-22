#define NUM_ITER 24513

#include <header.h>

int main_bench(){
    int n,i,A[100],B[100];
    double C[100],D[100];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
                     my_scanf("%d%d",&A[i],&B[i]);
                    if(i==0) C[0]=1.0*B[0]/A[0];
                     if(i>=1){C[i]=1.0*B[i]/A[i];}
                     D[i]=C[i]-C[0];
                     if(i>=1&&D[i]>0.05)
                     {my_printf("better\n");}
                     
                         if(i>=1&&D[i]<-0.05){my_printf("worse\n");}
                         if(i>=1&&D[i]>=-0.05&&D[i]<=0.05) my_printf("same\n");
                                            }
  
    return 0;
}
