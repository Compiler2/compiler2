#define NUM_ITER 291302

#include <header.h>

int main_bench(){
    int n, m, i;
    my_scanf("%d",&n);
    for(i=0;;){
        if(n==1){
            my_printf("End");
            break;
        }
        if(n%2!=0){
            m=n*3+1;
            my_printf("%d*3+1=%d\n",n,m);
            i=n;
            n=m;
            m=i;
        }
        if(n%2==0){
            m=n/2;
            my_printf("%d/2=%d\n",n,m);
            i=n;
            n=m;
            m=i;
        }
    }
    return 0;
}