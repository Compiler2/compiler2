#define NUM_ITER 6082

#include <header.h>

int main_bench()
{
    int n,sz[300],i,e,j,k=0,r[300];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
       my_scanf("%d",&sz[i]);
       }
    for(i=0;i<n;i++){
       for(j=0;j<i;j++){
          if(sz[i]==sz[j]){
            sz[i]=0;
            }
            }
            }
    for(i=0;i<n;i++){
       if(sz[i]!=0){
         r[k]=sz[i];
         k++;
         }
         }
    for(i=0;i<k-1;i++){
       my_printf("%d,",r[i]);
       }
    my_printf("%d",r[k-1]);
    int t;
    my_scanf("%d",&t);
    return 0;
}

