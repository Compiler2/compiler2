#include <header.h>

int main_bench(){
    int sz[98];
    int n;
    my_scanf("%d\n",&n);
    
    for(int i=0;i<n;i++){
        my_scanf("%d ",&(sz[i]));}
    int end[98];
    
    for(int m=0;m<n-1;m++){
        end[m]=sz[n-1-m];
        my_printf("%d ",end[m]);}
     end[n-1]=sz[0];
     my_printf("%d",end[n-1]);
      
     return 0;
}

        