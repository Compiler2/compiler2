#define NUM_ITER 8098

#include <header.h>

int main_bench(){
    int n,i,j,k=0;
    int a[300],b[300];
    my_scanf("%d",&n);
    for(i=0;i<n-1;i++){
                     my_scanf("%d ",&a[i]);
                     }
                     my_scanf("%d",&a[n-1]);
    for(i=n-1;i>0;i--){
                        for(j=0;j<i;j++){
                                         if(a[i]==a[j]){
                                                        break;
                                                        }
                                                        }
                                         if(j==i){
                                                  b[k]=a[i];
                                                  k+=1;
                                                  }
                                                  
                                                  }
    b[k]=a[0];
    for(i=k;i>0;i--){
                      my_printf("%d,",b[i]);
                      }
                      my_printf("%d",b[0]);
                      return 0;
                      }
