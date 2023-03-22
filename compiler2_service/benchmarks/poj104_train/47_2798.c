#define NUM_ITER 52199

#include <header.h>

int main_bench(){
    int sz[100];
    int n;
    int e;
    int a,b;
    my_scanf("%d",&n);
    for(int i=0;i<n;i++){
            my_scanf("%d",&(sz[i]));}
    b=n/2;
    for(int k=0;k<b;k++){
            a=n-k-1;
            e=sz[a];
            sz[a]=sz[k];
            sz[k]=e;
            }

    for(int i=0;i<n;i++){
            my_printf("%d",sz[i]);
            if(i<n-1){my_printf(" ");
            }
            }
    return 0;
    
                    
    }
