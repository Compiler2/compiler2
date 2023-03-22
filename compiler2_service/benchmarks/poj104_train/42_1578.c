#include <header.h>

int main_bench(){
    int x,n,i,j,k,sz[100000];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
            my_scanf("%d",&sz[i]);
    }
    my_scanf("%d",&x);
    k=0;
    for(i=0;i<n;i++){
           if(sz[i]==x){
                 for(j=i;j<n-1;j++){
                        sz[j]=sz[j+1];
                 }      
                 sz[n-1]=x-1;
           k++;
           i--; 
           }
    } 
    for(i=0;i<n-k;i++){
           if(i==n-k-1) my_printf("%d",sz[i]);
           else my_printf("%d ",sz[i]);
    }
    my_scanf("%d",&n);
    return 0;
}
