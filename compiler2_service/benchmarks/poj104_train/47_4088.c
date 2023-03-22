#define NUM_ITER 52336

#include <header.h>

int main_bench()
{
    int n,i=0,j=0,k=0,sum=0;
    my_scanf("%d",&n);
    int an[100],bn[100];
    for(k=0;k<n;k++){
       my_scanf("%d",&an[k]);
       bn[n-1-k]=an[k];
       }
    for(i=0;i<n-1;i++){
       my_printf("%d ",bn[i]);
       }
    my_printf("%d",bn[n-1]);
           return 0;
}
