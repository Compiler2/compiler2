#define NUM_ITER 5575

#include <header.h>

int main_bench(){
   int n,i,k,a[100000],f[100000]={1,1};
   my_scanf("%d",&n);
   for(k=0;k<n;k++){
        my_scanf("%d",&a[k]);
        for(i=2;i<=a[k];i++){
           f[i]=f[i-2]+f[i-1];
           }
           my_printf("%d\n",f[a[k]-1]);
        }
    my_scanf("%d",&n);
    return 0;
    }
