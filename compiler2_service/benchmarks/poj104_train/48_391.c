#define NUM_ITER 1286

#include <header.h>

int main_bench(){
    int a[11][11]={0},b[11][11]={0},m,n,x,i,r;
    my_scanf("%d%d",&m,&n);
    a[5][5]=m;
    b[5][5]=m;
    for(x=0;x<n;x++){ 
    for(i=1;i<10;i++){
                     for(r=1;r<10;r++){
                                      a[i][r]=2*b[i][r]+b[i-1][r-1]+b[i-1][r]+b[i-1][r+1]+b[i][r-1]+b[i][r+1]+b[i+1][r-1]+b[i+1][r]+b[i+1][r+1]; 
                                      }
                     }
    for(i=1;i<10;i++){
                      for(r=1;r<10;r++){
                                        b[i][r]=a[i][r];
                                        }
                      }
                      }
    for(i=1;i<10;i++){
                      for(r=1;r<9;r++){
                                        my_printf("%d ",a[i][r]);
                                        }
                      my_printf("%d\n",a[i][r]);
                                        }    
    return 0;
}