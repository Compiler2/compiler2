#define NUM_ITER 5095

#include <header.h>

int main_bench(){
    int n,i,j;
    my_scanf("%d",&n);
    int a[10000],b[10000];
    for(i=0;i<n;i++){
                     my_scanf("%d",&a[i]);
                     }
    for(i=0;i<n;i++){
                     for(j=0;j<a[i];j++){
                                         if(j==0 || j==1){
                                                 b[j]=1;
                                                 }
                                         else{
                                              b[j]=b[j-1]+b[j-2];
                                              }
                                         }
                     if(i!=n-1)
                        my_printf("%d\n",b[j-1]);
                     else
                        my_printf("%d",b[j-1]);
                     }
return 0;
}