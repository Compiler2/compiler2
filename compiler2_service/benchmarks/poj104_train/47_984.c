#define NUM_ITER 47559

#include <header.h>

int main_bench()
{
    int sz[100];
    int n,i,e;
    my_scanf("%d",&n);
    for(i=0;i<n;i=i+1){
                       my_scanf("%d ",&sz[i]);
                       }
    for(i=0;i<n/2;i=i+1){
                       e=sz[i];
                       sz[i]=sz[n-1-i];
                       sz[n-1-i]=e;
                       }
    for(i=0;i<n;i=i+1){
                       if(i<n-1) my_printf("%d ",sz[i]);
                       else my_printf("%d",sz[i]);
                       }
    
    return 0;
}