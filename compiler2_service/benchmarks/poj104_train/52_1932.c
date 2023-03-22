#define NUM_ITER 54628

#include <header.h>

int main_bench()
{
    int sz[1000],m,n,i,j;
    my_scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
    my_scanf("%d",&sz[i]);
    }
    m%=n;
    for(j=0;j<m;j++){
       for(i=n-1;i>=0;i--){
         sz[i+1]=sz[i];
        }
       sz[0]=sz[n];
    }
    my_printf("%d",sz[0]);
    for(i=1;i<n;i++){
    my_printf(" %d",sz[i]);
    }
    return 0;
}