#define NUM_ITER 58239

#include <header.h>


int main_bench(){
int k,i,e,n,sz[100];
my_scanf("%d",&n);
   for(i=0;i<n;i++){ 
            my_scanf("%d",&sz[i]);
            }


    my_printf("%d ",sz[n-1]);
    for(i=n-2;i>=1;i--){
         my_printf("%d ",sz[i]);
    }
    my_printf("%d",sz[0]);


return 0;
}
