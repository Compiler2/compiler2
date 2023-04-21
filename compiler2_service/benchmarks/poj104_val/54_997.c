#define NUM_ITER 5

#include <header.h>

int main_bench(){
    int n,m,k,r,i;
    my_scanf("%d%d",&n,&k);
    for(r=1;r<1000000;r++){
        m=r*(n-1);
        for(i=1;i<=n;i++){
            if(m%(n-1)==0){
                m=m*n/(n-1)+k;
            }
            else{
                break;
            }
            if(i==n){
                goto end;
            }
        }
    }
  end:
    my_printf("%d",m);
    return 0;
}