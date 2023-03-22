#define NUM_ITER 55461

#include <header.h>

int main_bench()
{
    int a[100],i,k,n;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
                     my_scanf("%d",&a[i]);
                     }
    for(i=n-1;i>0;i--){
                        my_printf("%d ",a[i]);
                       }
                     a[0]=a[0];
                    my_printf("%d",a[i]);
    return 0;
}