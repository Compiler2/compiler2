#include <header.h>


int main_bench(){ 
    int sz[100];
    int n,e,m,k;
    my_scanf("%d",&n);
    for(int i=0;i<n;i++){
            my_scanf("%d",&sz[i]);
            }
    m=n-1;
    k=0;
    while(k<m){
                e=sz[k];
                sz[k]=sz[m];
                sz[m]=e;
                k+=1;
                m-=1;
                }
    for(int i=0;i<n-1;i++){
            my_printf("%d ",sz[i]);
            }
    my_printf("%d",sz[n-1]);

        return 0; 
  } 
