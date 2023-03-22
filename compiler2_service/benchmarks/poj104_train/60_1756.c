#define NUM_ITER 12153

#include <header.h>









int prime(int n){
    int j;
    for (j=2; j<n/2+1; j++) {
        if (n%j==0) {
            break;
        }
    }
    if (j==n/2+1) {
        return 1;
    }else{
        return 0;
    }
}

int main_bench(){
    int n;
    int p=0;
    my_scanf("%d",&n);
    int i;
    for (i=2; i<=n; i++) {
        if (prime(i)==1){
            if (prime(i+2)==1&&i+2<=n) {
                my_printf("%d %d\n",i,i+2);
                p=1;
            }
        }
    }
    if (p==0) {
        my_printf("empty");
    }
    return 0;
}